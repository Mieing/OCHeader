@class FinderFeedRealtimeSyncCtrl, NSMutableArray, BaseResponse;

@interface FinderRealTimeSyncFeedInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) FinderFeedRealtimeSyncCtrl *nextSyncCtrlInfo;

+ (void)initialize;

@end
