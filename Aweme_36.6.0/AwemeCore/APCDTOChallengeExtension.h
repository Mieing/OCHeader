@class NSString, AWEChallengeModel;

@interface APCDTOChallengeExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEChallengeModel *challengeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
