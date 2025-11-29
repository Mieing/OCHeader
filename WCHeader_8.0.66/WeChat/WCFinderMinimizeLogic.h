@class WCFinderContextIdToken, NSString, MMUIViewController, MinimizeTaskData, WCFinderMinimizePlayCtrl, WCFinderMinimizePlayInfo, NSDictionary;
@protocol WCFinderMinimizeDelegate;

@interface WCFinderMinimizeLogic : NSObject <WCFinderFeedListVCFocusExt> {
    NSString *_bizKey;
}

@property (readonly, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *bizKey;
@property (retain, nonatomic) MMUIViewController *vc;
@property (weak, nonatomic) id<WCFinderMinimizeDelegate> vcDelegate;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (nonatomic) unsigned long long cacheTimePoint;
@property (nonatomic) BOOL floattingViewDisplaying;
@property (nonatomic) BOOL pageVCDisplayed;
@property (nonatomic) BOOL isPlayWhenEnter;
@property (retain, nonatomic) WCFinderMinimizePlayCtrl *playCtrl;
@property (retain, nonatomic) WCFinderMinimizePlayInfo *playInfo;
@property (nonatomic) BOOL isNeedMinimizeAnim;
@property (weak, nonatomic) MMUIViewController *currentPageVC;
@property (weak, nonatomic) id<WCFinderMinimizeDelegate> currentPageVCDelegate;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long closeTime;
@property (nonatomic) unsigned long long startPlayTime;
@property (retain, nonatomic) NSString *floatId;
@property (retain, nonatomic) NSDictionary *reportUDFKV;
@property (retain, nonatomic) WCFinderContextIdToken *contextToken;
@property (retain, nonatomic) NSString *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)hiddenFloatingView;
- (void)installPlayCtrl:(id)a0;
- (void)onFinderFeedListFocusChanged:(id)a0 contentVM:(id)a1;
- (void).cxx_destruct;

@end
