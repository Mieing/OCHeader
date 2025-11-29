@class NSString, NSNumber;

@interface AWEIMBridgeRefreshImMenuMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *menuList;
@property (retain, nonatomic) NSNumber *fatherPosition;
@property (retain, nonatomic) NSNumber *sonPosition;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
