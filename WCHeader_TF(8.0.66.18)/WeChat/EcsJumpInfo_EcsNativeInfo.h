@class NSString, NSData;

@interface EcsJumpInfo_EcsNativeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nativeUri;
@property (retain, nonatomic) NSData *params;
@property (retain, nonatomic) NSString *paramsJson;

+ (void)initialize;

- (void)setParamsJson:(id)a0;
- (id)paramsJson;
- (void)setParams:(id)a0;
- (id)params;
- (void)setNativeUri:(id)a0;
- (id)nativeUri;

@end
