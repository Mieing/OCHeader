@class WCFinderFullImgBrowserDataReportInitParams, UIView;

@interface WCFinderFullScreenImgBrowserVCInitParams : NSObject

@property (weak, nonatomic) UIView *startView;
@property (nonatomic) BOOL showActionSheet;
@property (retain, nonatomic) WCFinderFullImgBrowserDataReportInitParams *dataReportParams;
@property (nonatomic) BOOL enableDragLeftRightToClose;
@property (nonatomic) BOOL notTriggerParentVCLifeCycleFunc;

- (void).cxx_destruct;

@end
