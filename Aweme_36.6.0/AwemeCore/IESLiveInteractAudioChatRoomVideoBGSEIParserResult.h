@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveInteractAudioChatRoomVideoBGSEIParserResult : IESLiveDynamicMTLModel <IESLiveSEIParserResult, MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *userID;
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

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
