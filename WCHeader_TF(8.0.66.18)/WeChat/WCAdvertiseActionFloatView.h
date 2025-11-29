@class WCDataItem, NSString, UITableView, UILabel, UIView, UIButton;
@protocol WCAdvertiseActionFloatViewDelegate;

@interface WCAdvertiseActionFloatView : MMUIView <CAAnimationDelegate, UITableViewDataSource, UITableViewDelegate> {
    UILabel *m_tipLabel;
    UIView *m_lineView;
    UITableView *m_dislikeTableView;
    struct CGPoint { double x; double y; } m_showPoint;
    UITableView *m_feedbackTableView;
}

@property (readonly, nonatomic) WCDataItem *m_item;
@property (readonly, nonatomic) UIButton *m_unInterestBtn;
@property (weak, nonatomic) id<WCAdvertiseActionFloatViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showWithItemData:(id)a0 tipPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)hide;
- (void)spanReasonList;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
