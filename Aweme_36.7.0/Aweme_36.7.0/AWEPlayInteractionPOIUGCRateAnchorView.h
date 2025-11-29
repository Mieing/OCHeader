@class NSString, AWEAwemeModel, UILabel, NSMutableArray, UIButton;
@protocol AWEPlayInteractionPOIUGCRateAnchorViewDelegate;

@interface AWEPlayInteractionPOIUGCRateAnchorView : UIView <AWEPlayInteractionPOIUGCRateAnchorView>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSMutableArray *gradeLabelArray;
@property (weak, nonatomic) id<AWEPlayInteractionPOIUGCRateAnchorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (void)didClickCloseButton;
- (void)didTapCommentLabel:(id)a0;
- (id)p_createGradeLabelWithGradeModel:(id)a0;
- (void)p_gradeLabelDidTapped:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)init;

@end
