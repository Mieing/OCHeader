@class NSString;

@interface MMFinderLiveCommentDowngradeObj : NSObject

@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *localClientMsgId;
@property (retain, nonatomic) NSString *replaceString;

- (id)initWithJoinliveMsgRecallInfo:(id)a0;
- (id)initWithLiveRoomRecallInfo:(id)a0;
- (BOOL)checkNeedDowngradeCommentDataItem:(id)a0;
- (BOOL)isCommentSupportDowngrade:(id)a0;
- (void).cxx_destruct;

@end
