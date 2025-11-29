@interface WCMomentsPoiShareViewModel : WCMomentsPostShareBaseViewModel

@property (nonatomic) BOOL hasUnsupportedMedia;
@property (nonatomic) BOOL shareToBizBtnEnabled;

- (id)initWithDataItem:(id)a0 scene:(long long)a1;
- (BOOL)reallyShareFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (BOOL)_shareImagesToPoiFromViewController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)shouldShowShareButton;
- (id)svgIconName;
- (id)svgIconColor;
- (id)tips;
- (double)fontSize;

@end
