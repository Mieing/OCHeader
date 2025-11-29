@class NSString, NSMutableArray;

@interface AWEDCardBaseMessageManager : NSObject <AWEDCardTriggerDelegateProtocol>

@property (retain, nonatomic) NSMutableArray *callbacksArray;
@property (retain, nonatomic) NSMutableArray *processorsArray;
@property (retain, nonatomic) NSMutableArray *triggersArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addDCardRequestParamsProcessor:(id /* block */)a0;
- (void)addDCardMessageListenerWithCallback:(id /* block */)a0;
- (void)setupDefaultTriggers;
- (void)didReceiveDCardMessage:(id)a0 messageType:(unsigned long long)a1 error:(id)a2;
- (BOOL)checkDCardMessageModelValidity:(id)a0;
- (void)registerDCardTrigger:(id)a0;
- (void)requestDCardMessageWithPath:(id)a0 params:(id)a1 trigger:(id)a2 callback:(id /* block */)a3;
- (void)pullDCardWithExtraParams:(id)a0 trigger:(id)a1 callback:(id /* block */)a2;
- (void)registerDCardMessageUsingPersistentConnectionWithBusinessID:(id)a0 callback:(id /* block */)a1;
- (id)bsyncBusinessID;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requestPath;
- (id)requestParams;

@end
