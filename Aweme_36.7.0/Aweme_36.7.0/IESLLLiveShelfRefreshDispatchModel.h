@class NSString;

@interface IESLLLiveShelfRefreshDispatchModel : NSObject

@property (nonatomic) long long tabId;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *anchorProductId;
@property (nonatomic) BOOL needScrollTop;
@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) BOOL isShowLoading;
@property (copy, nonatomic) NSString *requestReason;
@property (nonatomic) long long messageUpdateType;

- (id)getRefreshRequestReason;
- (BOOL)needHandleDispatch;
- (BOOL)isRefreshMessage;
- (void).cxx_destruct;

@end
