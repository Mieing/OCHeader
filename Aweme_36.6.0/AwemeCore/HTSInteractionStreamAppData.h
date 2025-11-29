@class IESLiveInteractionCropData, NSString, NSArray, HTSInteractStreamCanvas, HTSInteractStreamRegion, NSDictionary, HTSInteractStreamEventParams, NSNumber, IESLiveAnchorInteractInfoModel;

@interface HTSInteractionStreamAppData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *grids;
@property (retain, nonatomic) NSArray *horizontalGrids;
@property (retain, nonatomic) NSArray *mixGrids;
@property (retain, nonatomic) HTSInteractStreamRegion *gameClip;
@property (retain, nonatomic) HTSInteractStreamRegion *cameraClip;
@property (retain, nonatomic) NSString *vendor;
@property (retain, nonatomic) NSNumber *landscapeRatio;
@property (retain, nonatomic) NSNumber *portraitRatio;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *uiLayout;
@property (retain, nonatomic) NSNumber *interactiveScene;
@property (retain, nonatomic) NSNumber *subStyle;
@property (retain, nonatomic) NSNumber *positionStashStatus;
@property (retain, nonatomic) NSNumber *lastUpdateAt;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) HTSInteractStreamCanvas *canvas;
@property (retain, nonatomic) NSNumber *subScene;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) IESLiveAnchorInteractInfoModel *anchorInteractInfo;
@property (copy, nonatomic) NSString *layoutKey;
@property (retain, nonatomic) NSNumber *vrType;
@property (retain, nonatomic) NSNumber *gameType;
@property (retain, nonatomic) NSNumber *gameFullV2;
@property (retain, nonatomic) NSNumber *mixStreamType;
@property (copy, nonatomic) NSDictionary *streamSize;
@property (copy, nonatomic) NSArray *uiFeatureList;
@property (retain, nonatomic) HTSInteractStreamEventParams *eventParams;
@property (retain, nonatomic) IESLiveInteractionCropData *linkmicCrop;
@property (retain, nonatomic) NSNumber *subUILayout;
@property (retain, nonatomic) NSNumber *showPlayer;
@property (retain, nonatomic) NSNumber *hideAudioBG;
@property (retain, nonatomic) NSArray *aiUserInfos;
@property (copy, nonatomic) NSString *playModeList;
@property (retain, nonatomic) NSNumber *hideMicseat;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)canvasJSONTransformer;
+ (id)gridsJSONTransformer;
+ (id)horizontalGridsJSONTransformer;
+ (id)mixGridsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
