@class AWEPlayInteractionDescriptionContext, AWEAwemeModel, NSArray, NSMutableParagraphStyle, UIFont, YYTextLayout, NSDictionary, YYLabel, NSMutableAttributedString, AWEPlayInteractionTruncationTokenModel, UIColor;

@interface AWEPlayInteractionDescriptionInfoModel : NSObject

@property (weak, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (retain, nonatomic) NSMutableParagraphStyle *paragraphStyle;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;
@property (nonatomic) BOOL enableTextExtrasModify;
@property (retain, nonatomic) NSArray *descriptionTextExtras;
@property (retain, nonatomic) NSArray *descriptionExtraModels;
@property (retain, nonatomic) NSMutableAttributedString *simplyAttributedString;
@property (retain, nonatomic) NSArray *simplyDescriptionExtraModels;
@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (retain, nonatomic) NSDictionary *textExtraAttributes;
@property (retain, nonatomic) UIFont *descriptionLabelFont;
@property (retain, nonatomic) UIFont *descriptionLabelFontWithMedium;
@property (retain, nonatomic) UIColor *descriptionLabelColorWithLink;
@property (nonatomic) double textRenderWidth;
@property (weak, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) YYTextLayout *originalDescriptionFullTextLayout;
@property (retain, nonatomic) YYTextLayout *originalDescriptionTextLayout;
@property (nonatomic) long long originalDescriptionNumberOfLines;
@property (nonatomic) long long limitDescriptionNumberOfLines;
@property (retain, nonatomic) NSMutableAttributedString *attributedTextWithTail;
@property (retain, nonatomic) YYTextLayout *descriptionTextWithTailLayout;
@property (nonatomic) BOOL isDescTruncated;
@property (readonly, nonatomic) long long foldRow;
@property (nonatomic) BOOL isClickExpandButton;
@property (nonatomic) BOOL canCaptionExpand;
@property (retain, nonatomic) AWEPlayInteractionTruncationTokenModel *truncationTokenModel;
@property (nonatomic) BOOL shouldChangeAlbumDescriptionElement;

+ (id)descriptionInfoModel:(id)a0;

- (void)updateString:(id)a0;
- (id)createSimplyDescriptionExtraModels;
- (id)createDefaultAttributedString;
- (void)setDescriptionDefaultAttributes:(id)a0;
- (void)updateAttributedString:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)defaultParagraphStyle;

@end
