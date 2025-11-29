@class NSString, NSMutableArray;
@protocol AWEIMChatListPublicAbility, AWEIMChatListPublicData;

@interface AWEIMChatListComponentCenter : NSObject <AWEIMChatListComponentCenter>

@property (retain, nonatomic) NSMutableArray *components;
@property (weak, nonatomic) id<AWEIMChatListPublicData, AWEIMChatListPublicAbility> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addComponents:(id)a0;
- (void)addComponent:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
