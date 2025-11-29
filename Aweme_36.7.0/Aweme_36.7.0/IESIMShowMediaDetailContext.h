@class AWEIMMessage, UITableViewCell;

@interface IESIMShowMediaDetailContext : NSObject

@property (retain, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL loadDetail;
@property (copy, nonatomic) id /* block */ loadOriginFinishedBlock;
@property (nonatomic) BOOL shouldShowComment;
@property (nonatomic) BOOL shouldShowChapterPanel;

- (void).cxx_destruct;

@end
