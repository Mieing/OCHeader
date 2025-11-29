@class IESLiveInteractionCropData, NSString, NSDictionary, NSData, HTSInteractionStreamAppData;

@interface IESLiveContourSEIParserResult : IESLiveDynamicModel <IESLiveSEIParserResult>

@property (retain, nonatomic) NSData *contourInfoData;
@property (copy, nonatomic) NSString *contourInfoStr;
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
