@class UIColor, NSString, NSDictionary, UIImageView, UILabel, NSMutableArray, RichTextView;

@interface WCHeaderGridView : UIView {
    NSMutableArray *m_arrContacts;
    unsigned int likeCount;
    RichTextView *m_richText;
    NSMutableArray *m_arrHeaderViews;
    NSMutableArray *m_arrHeaderMatteViews;
    BOOL isHBComment;
    BOOL isRewardGrid;
}

@property (retain, nonatomic) NSString *customTextContent;
@property (retain, nonatomic) NSDictionary *customHeadImgUrlDic;
@property (retain, nonatomic) UIColor *customIconImageColor;
@property (retain, nonatomic) NSString *customIconSVGImageName;
@property (nonatomic) double imageHeight;
@property (nonatomic) double rowSpace;
@property (nonatomic) double sectionSpace;
@property (nonatomic) unsigned int countPerLine;
@property (readonly, nonatomic) UILabel *m_titleLabel;
@property (readonly, nonatomic) UIImageView *m_iconImageView;
@property (copy, nonatomic) id /* block */ onHedaImageClick;

- (id)initWithUserInfos:(id)a0 likeCount:(unsigned int)a1;
- (id)initWithUserInfos:(id)a0 likeCount:(unsigned int)a1 isHBComment:(BOOL)a2;
- (id)initWithUserInfos:(id)a0 likeCount:(unsigned int)a1 isHBComment:(BOOL)a2 customTextContent:(id)a3 customHeadImgUrlDic:(id)a4 customIconImageColor:(id)a5 customIconSVGImageName:(id)a6;
- (id)initWithRewardInfos:(id)a0 likeCount:(unsigned int)a1 isRewardGrid:(BOOL)a2;
- (void)onClickHeadImageView:(id)a0;
- (id)getIconImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)initView;
- (void)updateView;
- (id)fetchCustomHeadImgUrlForIndex:(int)a0;
- (id)displayNameForContactAtIndex:(long long)a0;
- (void)updateCustomHeadImageForHeadView:(id)a0 index:(int)a1;
- (void)setCustomHeadImageCornerForHeadView:(id)a0 index:(int)a1;
- (id)accessibilityLabelForHeadImageAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
