@class WCDataItem, WCMomentsPostReportSession, NSString, WCMomentsShareReporter, UIColor;

@interface WCMomentsPostShareBaseViewModel : NSObject <WCTimelineFooterItemViewModel>

@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) long long scene;
@property (retain, nonatomic) WCMomentsShareReporter *shareReporter;
@property (nonatomic) BOOL Configurations_canShowShareButton;
@property (retain, nonatomic) WCMomentsPostReportSession *postSession;
@property (copy, nonatomic) NSString *svgIconName;
@property (retain, nonatomic) UIColor *svgIconColor;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dr_bindShareButton:(id)a0;
- (void)dr_resetShareButton:(id)a0;
- (id)initWithDataItem:(id)a0 scene:(long long)a1;
- (void)updateDataItem:(id)a0;
- (BOOL)shouldDisplayItemInTimelineFooterView;
- (BOOL)shouldShowShareButton;
- (BOOL)hasActionRecordForShowingShareButton;
- (BOOL)shareFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_prepareMediaDownloaders;
- (void)_startMediaDownloaders:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)reallyShareFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (void).cxx_destruct;

@end
