@class NSDictionary;

@interface AWEInteractModularizationNoticeTrackerParams : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *notificationNoticeParams;
@property (retain, nonatomic) NSDictionary *notificationMessageInnerMessageParams;
@property (retain, nonatomic) NSDictionary *messageStopNoticeParams;
@property (retain, nonatomic) NSDictionary *messageRestoreNoticeParams;
@property (retain, nonatomic) NSDictionary *commentLikeParams;
@property (retain, nonatomic) NSDictionary *commentReplyParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
