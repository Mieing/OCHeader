@class NSMutableArray, NSString, UIImageView, AWEAwemeModel, UIView, UILabel, UIButton;
@protocol AWEPlayInteractionPOIUGCRateAnchorViewDelegate;

@interface AWEPlayInteractionPOIUGCRateNewAnchorView : UIView <AWEPlayInteractionPOIUGCRateAnchorView>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *POIIconView;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) NSMutableArray *usedLabelArray;
@property (retain, nonatomic) NSMutableArray *idleLabelArray;
@property (weak, nonatomic) id<AWEPlayInteractionPOIUGCRateAnchorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (id)createLabel;
- (void)didTapCommentLabel:(id)a0;
- (id)splitDescription:(id)a0 withPOIName:(id)a1;
- (void)didCloseCommentLabel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
