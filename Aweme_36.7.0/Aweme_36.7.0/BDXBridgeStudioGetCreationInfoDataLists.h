@class NSString, NSNumber;

@interface BDXBridgeStudioGetCreationInfoDataLists : BDXBridgeModel

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSNumber *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
