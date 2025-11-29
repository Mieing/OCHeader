@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaLiteUseCaseWrapper : NSObject <MMUseCaseCallback, MMIKindaLiteUseCaseWrapper>

@property (retain, nonatomic) MMVoidITransmitKvDataCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startKindaLiteUseCaseImpl:(id)a0 data:(id)a1 callback:(id)a2;
- (BOOL)isEnableLiteAppUseCase:(id)a0 data:(id)a1;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
