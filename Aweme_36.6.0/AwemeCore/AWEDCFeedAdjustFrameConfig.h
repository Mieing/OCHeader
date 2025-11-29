@interface AWEDCFeedAdjustFrameConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (copy, nonatomic) id /* block */ shouldAdjustFrameBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
