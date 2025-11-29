@class UIColor;

@interface AWENewVideoCoverChangeTextLayerColorCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) UIColor *originColor;
@property (retain, nonatomic) UIColor *nowColor;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
