@class NSDictionary;

@interface AWEInteractionNoticeModularizationEventTrackParams : NSObject

@property (copy, nonatomic) NSDictionary *notificationNoticeParams;
@property (copy, nonatomic) NSDictionary *notificationMessageInnerMessageParams;
@property (copy, nonatomic) NSDictionary *messageStopNoticeParams;
@property (copy, nonatomic) NSDictionary *messageRestoreNoticeParams;
@property (copy, nonatomic) NSDictionary *commentLikeParams;
@property (copy, nonatomic) NSDictionary *commentReplyParams;

+ (id)paramsWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
