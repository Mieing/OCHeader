@class IESLiveGuideToolBarItem, NSString;

@interface AWELiveOpenLiveMarketingToolFragment : IESLiveGuideComponent

@property (retain, nonatomic) IESLiveGuideToolBarItem *windmillItem;
@property (copy) NSString *originRightText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL itemFirstTimeLoad;

- (void)componentMount;
- (void)componentUnmount;
- (void)handleMarketingToolsFENotification:(id)a0;
- (void)toolbarItemReloadFinished;
- (void)switchToolState:(BOOL)a0;
- (id)getTrackParamsWithItem:(id)a0;
- (void).cxx_destruct;

@end
