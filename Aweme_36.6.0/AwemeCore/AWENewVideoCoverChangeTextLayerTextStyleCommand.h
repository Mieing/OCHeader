@class UIColor, AWEStoryTextImageModel;

@interface AWENewVideoCoverChangeTextLayerTextStyleCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) UIColor *originForegroundColor;
@property (nonatomic) BOOL originOutline;
@property (nonatomic) double originOutlineWidth;
@property (retain, nonatomic) UIColor *originOutlineColor;
@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
