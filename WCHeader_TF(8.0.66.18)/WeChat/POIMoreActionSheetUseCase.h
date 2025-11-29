@class MMScrollActionSheet, NSString, ForwardMessageLogicController, POIInfo;
@protocol POIMoreActionSheetUseCaseDelegate, POIMoreActionSheetViewLocationDelegate;

@interface POIMoreActionSheetUseCase : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, POICorrectionGuideViewDelegate> {
    ForwardMessageLogicController *_forwardLogicController;
    POIInfo *_poiInfo;
}

@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (nonatomic) unsigned int poiBizSource;
@property (nonatomic) int finderEnterScene;
@property (nonatomic) int finderCommentScene;
@property (nonatomic) unsigned long long finderPoiFromObjectId;
@property (retain, nonatomic) NSString *poiReportSessionID;
@property (nonatomic) unsigned int poiSrcType;
@property (weak, nonatomic) id<POIMoreActionSheetUseCaseDelegate> delegate;
@property (weak, nonatomic) id<POIMoreActionSheetViewLocationDelegate> viewLocationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPOIInfo:(id)a0;
- (void)setupReportParamsWithPOIBizSource:(unsigned int)a0 finderEnterScene:(int)a1 finderCommentScene:(int)a2 finderPoiFromObjectId:(unsigned long long)a3;
- (void)showScrollActionSheet;
- (id)genMenuItemArray;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)forwardLocationMsg:(id)a0;
- (unsigned long long)forwardMessageScene;
- (void)reportCustomMoreViewClickEvent:(id)a0;
- (void)reportCustomMoreViewClickEvent:(id)a0 dicParam:(id)a1;
- (void)reportViewClickEventForPOIDetail:(id)a0;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)a0;
- (id)finderDataReportParamDict;
- (id)getCurrentViewController;
- (void)OnOpenLocationWAApp;
- (void)copyAddressString;
- (void).cxx_destruct;

@end
