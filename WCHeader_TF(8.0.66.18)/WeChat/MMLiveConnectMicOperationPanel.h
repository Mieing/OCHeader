@class MMLiveApplyConnectMicAudience, UIView, UITapGestureRecognizer, NSArray, NSString, UITableView, UIPanGestureRecognizer, MMUIButton;
@protocol MMLiveConnectMicOperationPanelDelegate;

@interface MMLiveConnectMicOperationPanel : UIView <UIGestureRecognizerDelegate, MMLiveConnectedMicAudienceCellViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) UITableView *audienceTableView;
@property (retain, nonatomic) NSArray *displayAudienceArray;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double viewTopAtPanBegin;
@property (nonatomic) double previousPanPositionY;
@property (weak, nonatomic) id<MMLiveConnectMicOperationPanelDelegate> delegate;
@property (retain, nonatomic) NSArray *audienceArray;
@property (retain, nonatomic) MMLiveApplyConnectMicAudience *currentAudience;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL enableOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)updateDisplayAudienceArray;
- (void)showPanelWithInitialState:(unsigned long long)a0 enableOperation:(BOOL)a1;
- (void)updateCurrentAudience:(id)a0 audienceArray:(id)a1 andState:(unsigned long long)a2;
- (void)closeAction;
- (void)onMMLiveConnectedMicAudienceCellViewEnableConnectMic:(BOOL)a0;
- (void)onMMLiveConnectedMicAudienceCellViewConnectMicToAudience:(id)a0;
- (void)onMMLiveConnectedMicAudienceCellViewStopConnectMicFromAudience:(id)a0;
- (void)onMMLiveConnectedMicAudienceCellViewCancelConnectMicFromAudience:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)numberOfSectionsOfTableView;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handlePanelViewPanGesture:(id)a0;
- (void)handleTableViewPanGesture:(id)a0;
- (void).cxx_destruct;

@end
