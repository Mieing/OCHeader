@interface BDByteScreenCastTimeoutSetting : NSObject

@property (nonatomic) double generalTimeout;
@property (nonatomic) double onlyTimeout;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end
