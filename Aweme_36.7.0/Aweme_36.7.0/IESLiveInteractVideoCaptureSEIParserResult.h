@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData, NSNumber;

@interface IESLiveInteractVideoCaptureSEIParserResult : IESLiveDynamicMTLModel <IESLiveInteractVideoCaptureSEIParserProtocol>

@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long singMode;
@property (copy, nonatomic) NSString *linkID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL cameraOpen;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
