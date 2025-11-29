@class NSString;

@interface AWEIMShareProfileUtility : NSObject <AWEIMShareProfileUtilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)shareProfileMessageWithUserModel:(id)a0 toConversation:(id)a1;
- (void)getTopAwemeModelWithWithUserModel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)openSendShareProfilePanelWithConversation:(id)a0;
- (void)transferProfileWithWithMessage:(id)a0;
- (BOOL)isShareProfileMessageType:(long long)a0;
- (id)makeShareProfileMessageWithUser:(id)a0 fromConType:(unsigned long long)a1 coverList:(id)a2;

@end
