@class NSNumber;

@interface TIMXECOMGetUserMessagePullNextPageInfo : NSObject

@property (copy, nonatomic) NSNumber *nextConversationVersion;
@property (copy, nonatomic) NSNumber *nextCmdVersion;
@property (copy, nonatomic) NSNumber *nextReadInfoVersion;

+ (id)pullNextPageInfoWithNextConversationVersion:(id)a0 nextCmdVersion:(id)a1 nextReadInfoVersion:(id)a2;

- (void).cxx_destruct;

@end
