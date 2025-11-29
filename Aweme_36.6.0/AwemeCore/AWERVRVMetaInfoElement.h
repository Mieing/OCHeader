@class NSString, AWERVDescriptionView, MASConstraint;

@interface AWERVRVMetaInfoElement : AWERVVideoInfoBaseElement <AWERVDescriptionViewDelegate>

@property (retain, nonatomic) AWERVDescriptionView *infoView;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isFirstClickExpand;
@property (retain, nonatomic) MASConstraint *heightContraint;
@property (nonatomic) BOOL anchorFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterLiveRoom:(id)a0;
- (void)enterUserProfile:(id)a0;
- (void)showMixPanel;
- (void)descriptionViewDidClickExpand:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
