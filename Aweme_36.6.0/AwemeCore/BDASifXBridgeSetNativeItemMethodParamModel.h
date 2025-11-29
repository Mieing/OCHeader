@class NSString, NSObject;
@protocol NSCoding;

@interface BDASifXBridgeSetNativeItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject<NSCoding> *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
