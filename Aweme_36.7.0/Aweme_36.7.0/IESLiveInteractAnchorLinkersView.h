@class IESLiveInteractAnchorLinkerBGView, NSArray, UIImageView, UIView;
@protocol IESLiveInteractAnchorLinkersViewDelegate;

@interface IESLiveInteractAnchorLinkersView : UIView

@property (retain, nonatomic) UIView *playerListView;
@property (retain, nonatomic) UIImageView *groupBgView;
@property (retain, nonatomic) UIImageView *pkIconImageView;
@property (retain, nonatomic) IESLiveInteractAnchorLinkerBGView *pkSplitBGView;
@property (copy, nonatomic) NSArray *currentLinkers;
@property (weak, nonatomic) id<IESLiveInteractAnchorLinkersViewDelegate> delegate;
@property (nonatomic) unsigned long long alignType;
@property (nonatomic) unsigned long long groupStyle;
@property (readonly, copy, nonatomic) NSArray *selectedUser;
@property (nonatomic) BOOL disableItemSelect;

- (void)p_setupConstraints;
- (void)p_setupViews:(id)a0;
- (void)updateAllLinkersForFourAnchors:(id)a0;
- (void)updateAllLinkersForSixAnchors:(id)a0;
- (void)updateAllLinkersForMoreThanSixAnchors:(id)a0;
- (void)configLayoutItemView:(id)a0 withPlayer:(id)a1;
- (void)p_selectedItemChanged;
- (id)initWithDIContext:(id)a0 backgroundColor:(id)a1;
- (void)updateAllLinkers:(id)a0;
- (void).cxx_destruct;

@end
