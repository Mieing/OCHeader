@class UIView, AWEAwemeModel, NSString, UIImageView, AWEGradientView, YYLabel, AWETeenExtraParamModel, UILabel;
@protocol AWETeenGeneralCellInteractionDelegate, AWETeenDisplayViewControllerProtocol;

@interface AWETeenGeneralAuthorVideoInteractionView : UIView <AWETeenGeneralVideoInteractionViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (retain, nonatomic) UIImageView *diggIcon;
@property (retain, nonatomic) UILabel *diggLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UIImageView *tagIcon;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (weak, nonatomic) id<AWETeenDisplayViewControllerProtocol> videoDelegate;
@property (weak, nonatomic) id<AWETeenGeneralCellInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (nonatomic) long long vcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateDescription;
- (void)p_onTeenDiggNotification:(id)a0;
- (void)p_updateLikeCount;
- (void)p_updateDate;
- (void)p_updateVideoTag;
- (void)configWithModel:(id)a0 cardType:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
