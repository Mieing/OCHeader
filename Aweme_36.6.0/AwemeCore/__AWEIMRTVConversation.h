@class NSString;

@interface __AWEIMRTVConversation : NSObject <AWEIMRTVConversation>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarString;
@property (nonatomic) BOOL online;
@property (nonatomic) long long lastActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 name:(id)a1 avatarString:(id)a2;
- (void).cxx_destruct;

@end
