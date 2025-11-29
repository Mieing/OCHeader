@class NSString, NSTimer, AWESearchAdPopConfigModel, UIView, NSDictionary;
@protocol AWESearchAdPopConfigViewProtocol, AWESearchAdPopConfigManagerDelegate;

@interface AWESearchAdPopConfigManager : NSObject <AWESearchAdPopConfigManager, AWESearchAdPopConfigViewDelegate>

@property (weak, nonatomic) id<AWESearchAdPopConfigManagerDelegate> delegate;
@property (retain, nonatomic) UIView<AWESearchAdPopConfigViewProtocol> *pendantView;
@property (retain, nonatomic) AWESearchAdPopConfigModel *configModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double timeCount;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTimer:(id)a0;
- (void)setupPendantViewWith:(id)a0;
- (void)trackWith:(id)a0 extraData:(id)a1;
- (void)updatePendantViewStatus:(id)a0;
- (void)dismissAndRemove;
- (void)trackEventSearchResultClick;
- (void)viewDidDisAppear;
- (void)searchAdPopConfigDidClose:(id)a0;
- (void)searchAdPopConfigDidClick:(id)a0;
- (void)searchAdPopConfigFailed:(id)a0;
- (BOOL)isPendantViewHidden;
- (BOOL)isPendantViewHasSuperView;
- (void)showWith:(id)a0 extraData:(id)a1 onView:(id)a2 delegate:(id)a3;
- (void)viewDidAppear;
- (void)stopTimer;
- (void)dismiss;
- (void).cxx_destruct;
- (void)remove;
- (void)startTimer;
- (void)show;

@end
