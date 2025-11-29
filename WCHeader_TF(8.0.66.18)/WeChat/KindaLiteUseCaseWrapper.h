@class KindaLiteUseCase, MMVoidITransmitKvDataCallback, NSString;

@interface KindaLiteUseCaseWrapper : NSObject <MMUseCaseCallback, MMIKindaLiteUseCaseWrapper>

@property (retain, nonatomic) KindaLiteUseCase *kindaLiteUseCase;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startKindaLiteUseCaseImpl:(id)a0 data:(id)a1 callback:(id)a2;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
