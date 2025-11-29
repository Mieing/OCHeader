@class NSString, NSArray;

@interface AWEPOIRelationInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *relation;
@property (copy, nonatomic) NSArray *socialRelations;
@property (copy, nonatomic) NSString *rankDesc;
@property (copy, nonatomic) NSArray *recommReasons;
@property (copy, nonatomic) NSArray *pubOpinions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
