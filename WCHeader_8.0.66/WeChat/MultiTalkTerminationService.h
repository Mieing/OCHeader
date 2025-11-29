@class NSString;

@interface MultiTalkTerminationService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSupportExceptionMessage;
+ (void)supplementLocalExceptionMessage:(id)a0 exceptionType:(unsigned long long)a1 hasRemain:(BOOL)a2;
+ (void)setMMKVMultiTalkStatus:(unsigned long long)a0 status:(int)a1 roomname:(id)a2;
+ (void)cleanMMKVMultiTalkStatus:(BOOL)a0;
+ (int)getIfMMKVMultiTalkStatusMatch:(unsigned long long)a0;

- (void)onServiceInit;
- (void)onServiceClearData;

@end
