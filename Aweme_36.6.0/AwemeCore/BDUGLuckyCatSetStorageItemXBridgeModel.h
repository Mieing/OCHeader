@class NSString, NSNumber;

@interface BDUGLuckyCatSetStorageItemXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) NSNumber *expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
