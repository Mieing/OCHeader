@class UIColor, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerColorCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NSMutableArray *originColors;
@property (retain, nonatomic) UIColor *nowColor;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
