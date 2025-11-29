@class WCFinderDataItem, StatusFooterJumpFinderFeed;

@interface TextState3rdPartyFinderHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) StatusFooterJumpFinderFeed *jumpInfo;
@property (nonatomic) unsigned long long dataStatus;

- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (id)getLocalDataItemWithTid:(id)a0;
- (unsigned int)type;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (id)genReportExtInfo;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)autoHandleAppLifeCycleEvent;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)reportActivityId;
- (void)checkValidWithCompletionBlock:(id /* block */)a0 cacheOnly:(BOOL)a1;
- (id)updateBizData;
- (BOOL)needUpdateBizData;
- (BOOL)dataReady;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)a0;
- (BOOL)syncCheckValidStatus;
- (id)invalidMessage;
- (BOOL)_isLimitedByFinderYoungStyle;
- (void).cxx_destruct;

@end
