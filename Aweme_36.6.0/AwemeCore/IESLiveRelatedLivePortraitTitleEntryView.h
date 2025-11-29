@class IESLiveRelatedLiveEntryItem, NSString, UIImageView, IESLiveRelatedLiveBaseBtn, UILabel, UIView;

@interface IESLiveRelatedLivePortraitTitleEntryView : UIView <IESLiveRelatedLivePortraitEntryViewProtocol>

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *leftTitleView;
@property (retain, nonatomic) UIView *relatedLiveButtonBGView;
@property (retain, nonatomic) IESLiveRelatedLiveBaseBtn *relatedLiveButton;
@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *item;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ arrowButtonDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithEntryItem:(id)a0;
- (void)updateLeftTitle:(id)a0 leftIcons:(id)a1;
- (id)initWithEntryItem:(id)a0;
- (void)updatePaidTag:(id)a0;
- (void)onClickArrowButton;
- (void).cxx_destruct;
- (void)setupView;
- (void)updateTitle:(id)a0;

@end
