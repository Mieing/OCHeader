@class NSString;

@interface IESLiveInteractStreamRenderFilterConfig : NSObject

@property (copy, nonatomic) NSString *effectPlatformConfig;
@property (copy, nonatomic) NSString *effectABInfo;
@property (copy, nonatomic) NSString *effectABLicense;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL renderOnSingleView;
@property (nonatomic) int masterLayerId;

- (void).cxx_destruct;

@end
