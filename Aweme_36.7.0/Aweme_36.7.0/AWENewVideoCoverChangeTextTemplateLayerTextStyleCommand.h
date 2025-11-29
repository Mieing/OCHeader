@class AWEStoryTextImageModel, NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerTextStyleCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NSMutableArray *originForegroundColors;
@property (retain, nonatomic) NSMutableArray *originOutlines;
@property (retain, nonatomic) NSMutableArray *originOutlineWidths;
@property (retain, nonatomic) NSMutableArray *originOutlineColors;
@property (retain, nonatomic) NSMutableArray *originBackgroundColors;
@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
