@class NSArray, NSString;

@interface BDMannorComponentRelationInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long animationType;
@property (retain, nonatomic) NSArray *nameList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
