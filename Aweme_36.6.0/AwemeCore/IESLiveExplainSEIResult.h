@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Extension;

@interface IESLiveExplainSEIResult : NSObject <IESLiveSEIParserResult>

@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Extension *extension;
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
