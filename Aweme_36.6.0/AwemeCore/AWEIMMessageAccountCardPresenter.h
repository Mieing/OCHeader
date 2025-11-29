@class AWEIMUIImageViewPresenter, AWEIMUIViewPresenter, AWEIMYYLabelPresenter;

@interface AWEIMMessageAccountCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *avatar;
@property (retain, nonatomic) AWEIMYYLabelPresenter *nameLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *nameBox;
@property (retain, nonatomic) AWEIMYYLabelPresenter *introLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *introBox;
@property (retain, nonatomic) AWEIMUIViewPresenter *avatarBox;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *aiTag;
@property (retain, nonatomic) AWEIMUIViewPresenter *aiTagBackgroudView;
@property (retain, nonatomic) AWEIMYYLabelPresenter *aiLabel;

- (BOOL)isFormat;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)updateSubpresenterProps;
- (void)setFormatAttrName;
- (id)getAttrNameStr;
- (id)getAttrIntroStr;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
