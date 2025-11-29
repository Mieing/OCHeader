@class NSString, NSMutableSet;

@interface AWEPublishMessageBridgeSubsriber : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) NSMutableSet *reactIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)subsribe;
+ (id)shared;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)task:(id)a0 cancelWithResult:(BOOL)a1;
- (id)p_reactIDWithTask:(id)a0;
- (void)sendEventWithTask:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
