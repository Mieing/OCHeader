@class NSTimer, NSMutableArray;

@interface AWEToast : NSObject

@property (class, retain, nonatomic) NSMutableArray *messageQueue;
@property (class, retain, nonatomic) NSTimer *timer;

+ (void)showNetWeak;
+ (void)showAtTooMore;
+ (void)showDraftPublishAndForceUseLocal:(BOOL)a0;
+ (void)show:(id)a0 onView:(id)a1;
+ (void)showDraftPublish;
+ (void)showNotShare;
+ (void)showSelfSeeNotShare;
+ (void)showNotDownload;
+ (void)showNotDuet;
+ (void)showNotDownloadAndConvertLivePhoto;
+ (void)showNotComment;
+ (void)show:(id)a0 keyboardHeight:(double)a1;
+ (void)showError:(id)a0 onView:(id)a1;
+ (void)showSuccess:(id)a0 onView:(id)a1;
+ (void)setToastStyle:(unsigned long long)a0;
+ (void)teen_showNetWeak;
+ (void)teen_showInQueue:(id)a0;
+ (void)teen_showNetWeakInQueue;
+ (void)annouceAccessibilityMessage:(id)a0;
+ (void)show:(id)a0;
+ (void)showError:(id)a0;
+ (void)showSuccess:(id)a0;

@end
