@class NSString, AWEAwemeModel;

@interface AWEFeedPauseModalSnackBar : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long bizType;

- (id)commonParams;
- (void)showWithModel:(id)a0 enterFrom:(id)a1;
- (void)showBottomSnackBar;
- (void)trackCloseSnackBarEventWithCloseMethod:(id)a0;
- (void)jumpToSettingsPage;
- (void)trackSnackBarShowEvent;
- (void).cxx_destruct;

@end
