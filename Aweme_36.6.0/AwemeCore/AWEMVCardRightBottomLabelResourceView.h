@class UIStackView, NSString, UIImageView, AWEFeedInsetsLabel, AWEAwemeModel, AWEDCFeedPageContext;

@interface AWEMVCardRightBottomLabelResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) AWEFeedInsetsLabel *rightLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) double prevContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResourceWithAwemeModel:(id)a0 context:(id)a1;
- (id)imageRightBottomUIConfigModel;
- (void)configRightLabelTextWithStr:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
