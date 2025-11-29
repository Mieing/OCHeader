@class UIView, ACCModernAutoCaptionTableView, NSArray, NSString, UIImageView, ACCModernAutoCaptionPanelBottomView, UILabel, ACCModernAudioSourceSwitchView;
@protocol ACCModernAutoCaptionPanelDelegate;

@interface ACCModernAutoCaptionPanelViewController : UIViewController <ACCModernAutoCaptionPanelBottomViewDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) ACCModernAutoCaptionPanelBottomView *bottomView;
@property (retain, nonatomic) ACCModernAutoCaptionTableView *captionTable;
@property (retain, nonatomic) ACCModernAudioSourceSwitchView *audioSourceSwitchView;
@property (retain, nonatomic) UIView *transitionView;
@property (retain, nonatomic) UILabel *transitionTitleLabel;
@property (retain, nonatomic) UIImageView *transitionImageView;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) unsigned long long currentHighlightIndex;
@property (nonatomic) unsigned long long currentScrollIndex;
@property (nonatomic) BOOL dragging;
@property (nonatomic) long long captionAudioSourceType;
@property (weak, nonatomic) id<ACCModernAutoCaptionPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildTransitionView;
- (void)buildBottomView;
- (void)buildCaptionTable;
- (void)selectMadrind;
- (void)updateSelectedStatusWithIndex:(unsigned long long)a0;
- (void)scrollToIndex:(unsigned long long)a0 selected:(BOOL)a1;
- (void)didClickOnItem:(unsigned long long)a0;
- (void)updateWithCaptions:(id)a0 mandarinStatus:(unsigned long long)a1 captionAudioSourceType:(long long)a2;
- (void)scrollToTime:(double)a0;
- (void)setAudioSourceType:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
