@class NSString;

@interface EventChainGlobalConstants : NSObject

@property (class, nonatomic, readonly) NSString *YataReservedBizEventImplKey;
@property (class, nonatomic, readonly) NSString *YataAfterRenderEventRegisterKey;
@property (class, nonatomic, readonly) NSString *YataPopPopupEventRegisterKey;
@property (class, nonatomic, readonly) NSString *ParamsBizKey;
@property (class, nonatomic, readonly) NSString *ParamsLocalKey;
@property (class, nonatomic, readonly) NSString *ParamsRequestKey;
@property (class, nonatomic, readonly) NSString *SaveLocalEventRegisterKey;
@property (class, nonatomic, readonly) NSString *RequestEventRegisterKey;
@property (class, nonatomic, readonly) NSString *OpenSchemaEventRegisterKey;
@property (class, nonatomic, readonly) NSString *TrackerEventRegisterKey;
@property (class, nonatomic, readonly) NSString *ToastEventRegisterKey;

- (void).cxx_destruct;
- (id)init;

@end
