@class MMFinderLiveCommentTableViewCellFrame;

@interface MMLiveCommentTableViewTopItem : NSObject

@property (retain, nonatomic) MMFinderLiveCommentTableViewCellFrame *cellFrame;
@property (nonatomic) double displayDuration;
@property (nonatomic) BOOL deleteOriginCell;
@property (retain, nonatomic) MMFinderLiveCommentTableViewCellFrame *originalCellFrame;
@property (nonatomic) long long originalCommentIndex;

- (void).cxx_destruct;

@end
