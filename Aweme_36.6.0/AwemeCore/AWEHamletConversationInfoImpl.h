@class NSString;

@interface AWEHamletConversationInfoImpl : NSObject <AWEHamletConversationInfo>

@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) long long userId;
@property (retain, nonatomic) NSString *secUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
