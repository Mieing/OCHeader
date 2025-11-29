@class NSDictionary, NSString;

@interface AWEDTOCreationModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long creationMode;
@property (copy, nonatomic) NSDictionary *createAwemeParams;
@property (nonatomic) BOOL disableResourceAdd;
@property (nonatomic) BOOL disableResourceRemove;
@property (copy, nonatomic) NSString *passthoughEffectId;
@property (copy, nonatomic) NSString *passthoughOriginalEffectId;
@property (nonatomic) BOOL disableAddVideo;
@property (copy, nonatomic) NSDictionary *exchangeRedPacket;
@property (nonatomic) BOOL hasSetEditorEffect;
@property (copy, nonatomic) NSString *featureCustomizationManagerClass;
@property (copy, nonatomic) NSString *featureCustomizationDraftClass;
@property (copy, nonatomic) NSString *featureCustomizationDraftString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
