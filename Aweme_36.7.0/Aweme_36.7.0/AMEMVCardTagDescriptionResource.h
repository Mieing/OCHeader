@class AWEFeedInsetsLabel, UIView, AWEMVSpecialStringInsetsLabel, AWEAwemeModel, NSString, UIImageView, AWEDCFeedPageContext, UILabel;

@interface AMEMVCardTagDescriptionResource : NSObject <AWEMVCardViewResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *subInfoLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEMVSpecialStringInsetsLabel *recallReasonLabel;
@property (retain, nonatomic) AWEFeedInsetsLabel *suffixLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (void)buildBottomInfoWithIconLabelType:(id)a0;
- (void)buildBottomInfoWithIconLabelSuffixType:(id)a0;
- (void)buildBottomInfoWithLabelType:(id)a0;
- (void)buildBottomInfoWithLabelAndTitleType:(id)a0;
- (void)buildBottomDescribePlaceHolderLabelWithChannelInfo:(id)a0;
- (void)updateRecallReasonLabelColor:(id)a0;
- (id)subInfoLabelFontWithMode:(id)a0;
- (id)attributedStringWithAlbumInfo:(id)a0 font:(id)a1;
- (id)initWithContext:(id)a0 model:(id)a1;
- (void)refreshWithAwemeModel:(id)a0 context:(id)a1 containerElement:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isDarkTheme;
- (void)setupViews;

@end
