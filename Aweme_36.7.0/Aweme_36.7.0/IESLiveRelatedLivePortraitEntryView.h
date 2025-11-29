@class IESLiveRelatedLiveEntryItem, NSString, IESLiveRelatedLiveBaseBtn, UIButton;

@interface IESLiveRelatedLivePortraitEntryView : UIView <IESLiveRelatedLivePortraitEntryViewProtocol>

@property (retain, nonatomic) IESLiveRelatedLiveBaseBtn *relatedLiveButton;
@property (retain, nonatomic) UIButton *arrowButton;
@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *item;
@property (copy, nonatomic) id /* block */ arrowButtonDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithEntryItem:(id)a0;
- (id)initWithEntryItem:(id)a0;
- (void)updatePaidTag:(id)a0;
- (void)onClickArrowButton;
- (void).cxx_destruct;
- (void)setupView;
- (void)updateTitle:(id)a0;

@end
