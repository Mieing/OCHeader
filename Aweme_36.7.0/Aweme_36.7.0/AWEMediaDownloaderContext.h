@class AWEMediaDownloadCommonTask, UIViewController, NSPointerArray, NSTimer, NSLock, AWEUIBottomBubbleView;

@interface AWEMediaDownloaderContext : NSObject <AWEMediaDownloaderContextProtocol>

@property (retain, nonatomic) NSPointerArray *downloadBarViewList;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSTimer *downloadBarDismissTimer;
@property (retain, nonatomic) NSTimer *failBubbleDismissTimer;
@property (retain, nonatomic) NSLock *viewListLock;
@property (retain, nonatomic) AWEUIBottomBubbleView *downloadFailBubbleView;
@property (nonatomic) unsigned long long retryTimes;
@property (nonatomic) double downloadBarHeight;
@property (retain, nonatomic) AWEMediaDownloadCommonTask *currentTask;
@property (retain, nonatomic) AWEMediaDownloadCommonTask *retryTask;
@property (weak, nonatomic) UIViewController *currentAppearVC;

- (long long)currentTaskStatus;
- (id)currentDownloadAwemeID;
- (BOOL)hasDownloadFailBubbleViewBeenInstantiated;
- (void).cxx_destruct;

@end
