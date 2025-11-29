@class NSString, NSArray;

@interface NLEAIMappingInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEAIMappingInfo> { struct NLEAIMappingInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *keyUUID;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *paramsPath;
@property (copy, nonatomic) NSString *workflowPath;
@property (nonatomic) int timestamp;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL adaptiveImage;
@property (nonatomic) BOOL asyncRequest;
@property (retain, nonatomic) NSArray *extraInputMappings;
@property (nonatomic) BOOL needAIAvatar;
@property (nonatomic) BOOL isProtocolString;
@property (retain, nonatomic) NSArray *pendantIds;
@property (retain, nonatomic) NSArray *captionIds;
@property (retain, nonatomic) NSArray *captionDurations;
@property (retain, nonatomic) NSArray *textFeatures;
@property (retain, nonatomic) NSArray *textInfos;
@property (retain, nonatomic) NSArray *frameExtractInfos;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEAIMappingInfo> { struct NLEAIMappingInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
