@class NSString, NSDictionary, NSNumber;

@interface BDUGLuckyScreenShotXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long timeOut;
@property (copy, nonatomic) NSString *filename;
@property (retain, nonatomic) NSNumber *saveToAlbum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
