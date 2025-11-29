@class NSString, NSNumber, NSDictionary;

@interface IESECMallXBridgeEcMallGetPageInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSNumber *isVisible;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *recommendInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
