@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveAudienceStreamColorSEIResult : NSObject <IESLiveSEIParserResult>

@property (nonatomic) double brightness;
@property (nonatomic) double saturation;
@property (nonatomic) double contrast;
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
- (id)initWithDict:(id)a0;

@end
