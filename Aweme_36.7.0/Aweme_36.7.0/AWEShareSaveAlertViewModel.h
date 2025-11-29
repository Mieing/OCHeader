@class AWEShareContext, NSArray, AWESharePlatformSetting, NSMutableDictionary, NSString, AWEMediaDownloadInfo;

@interface AWEShareSaveAlertViewModel : NSObject

@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (nonatomic) long long downloadResult;
@property (retain, nonatomic) AWESharePlatformSetting *platformSetting;
@property (retain, nonatomic) NSMutableDictionary *buttonsModelDictionary;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (nonatomic) BOOL isStayLandscape;
@property (readonly, nonatomic) BOOL shouldShowSave;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)trackShowEvent;
- (void)trackPanelShow;
- (id)platformIcon;
- (id)initWithContext:(id)a0 platformSetting:(id)a1;
- (BOOL)shouldShowToken;
- (void)onTapDismiss;
- (BOOL)canPerformActionWithButtonType:(unsigned long long)a0;
- (void)performActionWithButtonType:(unsigned long long)a0;
- (id)platformNameInTitle:(BOOL)a0;
- (id)defaultMessageWithSave:(BOOL)a0 withToken:(BOOL)a1;
- (void)makeEventContext;
- (BOOL)localCachedFileAlreadyExist;
- (void)saveTargetFileToAlbum;
- (void)beginDownloading;
- (void)trackClickEventWithPosition:(id)a0;
- (void)trackPanelClickWithTarget:(id)a0;
- (void)cancelDownloading;
- (id)createButtonByType:(unsigned long long)a0;
- (id)saveActionTitle;
- (void)performSaveAction;
- (void)performTokenAction;
- (BOOL)isDownloadAllowed;
- (BOOL)shouldAutoCopyToken;
- (BOOL)isAutoSaving;
- (void).cxx_destruct;
- (id)platformColor;
- (void)onAppear;

@end
