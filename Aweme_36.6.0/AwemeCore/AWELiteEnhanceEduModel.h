@class NSString, AWELuckyCatPendant;

@interface AWELiteEnhanceEduModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatPendant *userEduPendantExtend;
@property (nonatomic) BOOL hasNextUserEduPendantExtend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
