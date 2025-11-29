@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveAudienceNativeAPPSEIParserResult : NSObject <IESLiveSEIParserResult>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *value;
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

- (void).cxx_destruct;

@end
