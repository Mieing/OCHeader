@class WCDataItem;

@interface WCTogetherHistoryOperation : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL didDisplayInHistory;
@property (nonatomic) BOOL didDisplayInPreview;
@property (nonatomic) BOOL didDisplayInDetail;
@property (nonatomic) BOOL didLike;
@property (nonatomic) BOOL didComment;
@property (nonatomic) long long operatedType;
@property (nonatomic) double detailBrowsingAccumulatedTime;

- (void).cxx_destruct;

@end
