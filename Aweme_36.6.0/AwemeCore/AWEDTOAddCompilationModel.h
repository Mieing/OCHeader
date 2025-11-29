@class NSString;

@interface AWEDTOAddCompilationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *firstMixId;
@property (nonatomic) long long mixItemIndex;
@property (nonatomic) long long mixAddScene;
@property (nonatomic) BOOL isNewMix;
@property (copy, nonatomic) NSString *mixName;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) long long chargeType;
@property (nonatomic) long long chargeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
