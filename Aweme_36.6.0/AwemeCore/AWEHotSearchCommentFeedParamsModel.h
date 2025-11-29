@class NSNumber, AWEHotSearchCommentDataSourceModel;

@interface AWEHotSearchCommentFeedParamsModel : NSObject

@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEHotSearchCommentDataSourceModel *dataSource;

- (void).cxx_destruct;

@end
