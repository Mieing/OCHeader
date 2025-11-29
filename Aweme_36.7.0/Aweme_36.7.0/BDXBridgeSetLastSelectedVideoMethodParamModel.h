@class NSString, NSNumber;

@interface BDXBridgeSetLastSelectedVideoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *remind_type;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primary_title;
@property (copy, nonatomic) NSString *secondary_title;
@property (retain, nonatomic) NSNumber *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
