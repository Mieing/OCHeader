@class AWEProgressDecoratorViewStatusConfig, AWEProgressViewUIConfig, AWEProgressFakeViewStatusUIConfig;

@interface AWEProgressViewStatusUIConfig : NSObject

@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewNormalConfig;
@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewActiveConfig;
@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewDraggingConfig;
@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewStableConfig;
@property (retain, nonatomic) AWEProgressDecoratorViewStatusConfig *decoratorViewConfig;
@property (nonatomic) BOOL shouldUseFakeSlider;
@property (retain, nonatomic) AWEProgressFakeViewStatusUIConfig *fakeViewStatusConfig;

- (void).cxx_destruct;

@end
