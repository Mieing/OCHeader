@class NSString, WCAdDynamicCanvasServerData, WCAdDynamicCanvasDSLData, WCAdvertiseInfo, NSObject;
@protocol WCAdDynamicCanvasViewControllerDelegate;

@interface WCAdDynamicCanvasPageInfo : NSObject

@property (retain, nonatomic) WCAdDynamicCanvasDSLData *parsedCanvasDSLData;
@property (weak, nonatomic) id<WCAdDynamicCanvasViewControllerDelegate> dynamicCanvasDelegate;
@property (readonly, nonatomic) NSString *canvasKey;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *rewardCommInfo;
@property (retain, nonatomic) NSString *rewardParams;
@property (nonatomic) long long adType;
@property (nonatomic) long long outIndex;
@property (nonatomic) BOOL openAudio;
@property (nonatomic) long long source;
@property (nonatomic) long long originSource;
@property (nonatomic) long long outPlaybackTime;
@property (readonly, nonatomic) double screenWidth;
@property (readonly, nonatomic) double screenHeight;
@property (retain, nonatomic) WCAdDynamicCanvasServerData *canvasServerData;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) NSString *bizAppId;
@property (retain, nonatomic) NSObject *extraData;
@property (retain, nonatomic) NSString *updatedUxInfo;
@property (retain, nonatomic) NSString *commonDeviceInfo;
@property (retain, nonatomic) NSString *frontPageStateInfo;
@property (nonatomic) unsigned long long canvasPresentationStyle;
@property (nonatomic) BOOL halfScreenForbidPanUp;
@property (nonatomic) double halfScreenPageHeight;
@property (retain, nonatomic) NSString *adDynamicCanvasVCExtCheckPattern;
@property (nonatomic) BOOL forbidBackToBizApp;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originViewRectInScreen;

- (id)init;
- (id)fetchLaunchString;
- (id)fetchPageInfoDic;
- (id)fetchPageInfoExtraDic;
- (id)fetchRealUxInfo;
- (id)fetchParsedCanvasDSLData;
- (void).cxx_destruct;

@end
