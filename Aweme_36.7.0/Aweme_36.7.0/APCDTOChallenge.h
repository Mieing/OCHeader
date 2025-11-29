@class NSString, APCDTOChallengeExtension, NSArray;
@protocol ACCChallengeModelProtocol;

@interface APCDTOChallenge : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (retain, nonatomic) APCDTOChallengeExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSArray *challengeIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (id)valid_challengeId;
- (void).cxx_destruct;

@end
