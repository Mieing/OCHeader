@class NSString;

@interface AWESubChallengeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *subChallengeID;
@property (copy, nonatomic) NSString *subChallengeName;
@property (copy, nonatomic) NSString *subChallengeDescription;
@property (nonatomic) BOOL isCommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
