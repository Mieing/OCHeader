@class WAAppTaskReferrerInfo, NSString, NSDictionary, WAAppOpenCustomUIParameter, UINavigationController, UIColor;

@interface MMFinderLiveWeAppParams : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) int liveWeAppOpenScene;
@property (nonatomic) BOOL silentOpen;
@property (nonatomic) BOOL useSheetMode;
@property (nonatomic) BOOL usePushAnimation;
@property (nonatomic) BOOL forbidPushAnimation;
@property (nonatomic) BOOL simulatedNativeUsePresentAnimation;
@property (nonatomic) BOOL showNavigationBar;
@property (nonatomic) BOOL showShareBtn;
@property (nonatomic) BOOL showDraggingBar;
@property (nonatomic) BOOL forceLightMode;
@property (retain, nonatomic) NSDictionary *extraParamInfo;
@property (nonatomic) unsigned long long debugType;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) WAAppTaskReferrerInfo *refererData;
@property (retain, nonatomic) WAAppOpenCustomUIParameter *customUIParameter;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL afterOrientationPortrait;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ launchBlock;
@property (copy, nonatomic) id /* block */ shareBlock;
@property (nonatomic) BOOL forbidAutoFullScreenWhenTap;
@property (copy, nonatomic) NSString *headerTipsText;
@property (copy, nonatomic) NSString *transitCommonUxInfo;
@property (copy, nonatomic) id /* block */ m_headerTipsDidShowBlock;
@property (copy, nonatomic) id /* block */ m_headerTipsDidClickCloseBlock;
@property (retain, nonatomic) UIColor *bkMaskColor;
@property (copy, nonatomic) id /* block */ willBePresentedBlock;
@property (copy, nonatomic) id /* block */ willBeDismissedBlock;
@property (copy, nonatomic) id /* block */ didBeDismissedBlock;
@property (copy, nonatomic) id /* block */ frameChangeBlock;
@property (copy, nonatomic) id /* block */ reprocessAction;
@property (copy, nonatomic) id /* block */ appTaskRunningEventHandle;

- (id)description;
- (id)initWithAppId:(id)a0 pagePath:(id)a1 fromScene:(unsigned long long)a2 sceneNote:(id)a3;
- (void)addReprocessAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
