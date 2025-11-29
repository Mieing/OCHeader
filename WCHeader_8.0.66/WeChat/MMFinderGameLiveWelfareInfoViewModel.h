@class GameWelfareInfo, NSString, NSArray;
@protocol MMFinderGameLiveWelfareInfoViewModelDelegate;

@interface MMFinderGameLiveWelfareInfoViewModel : NSObject

@property (nonatomic, getter=isShowView) BOOL showView;
@property (retain, nonatomic) GameWelfareInfo *welfareInfo;
@property (retain, nonatomic) NSString *gameWelfareWebImageURL;
@property (retain, nonatomic) NSString *gameWelfareWebImageWording;
@property (retain, nonatomic) NSString *gameWelfareReportExtInfo;
@property (nonatomic) unsigned long long currentServerTs;
@property (nonatomic) BOOL needNoRelaunch;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<MMFinderGameLiveWelfareInfoViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *gameWelfareId;
@property (readonly, nonatomic) NSArray *welfareTaskList;

- (id)initWithWelfareInfo:(id)a0;
- (void)refreshStatus;
- (void)updateStatus:(id)a0;
- (void)openGameLiveWelfareInfoDetailView;
- (void)preloadGameLiveWelfareInfoDetailView;
- (void)startGameLiveWelfareInfoTaskAnimation;
- (void)onAppTaskDidEnterBackground:(id)a0 mode:(long long)a1;
- (void).cxx_destruct;

@end
