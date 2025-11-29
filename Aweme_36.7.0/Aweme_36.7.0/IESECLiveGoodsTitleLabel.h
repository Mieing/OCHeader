@class IESECLivePlatformTagsModel, NSString, NSArray, UIFont, IESECLiveGoodsModel, NSMutableDictionary, YYLabel, NSNumber, UIColor;
@protocol IESECLiveGoodsTitleLabelDelegate;

@interface IESECLiveGoodsTitleLabel : YYLabel

@property (retain, nonatomic) NSMutableDictionary *titleTagImageViewMap;
@property (retain, nonatomic) NSMutableDictionary *titlePlatformTagViewMap;
@property (retain, nonatomic) YYLabel *sourceLabel;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) IESECLivePlatformTagsModel *platformTags;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL showSource;
@property (nonatomic) BOOL disableAboveTitleTag;
@property (nonatomic) long long maxTagIconCount;
@property (nonatomic) double contentHeight;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) double maximumLineHeight;
@property (retain, nonatomic) NSNumber *expectedTagIconHeight;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double normalLineSpacing;
@property (nonatomic) double tagLineSpacing;
@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (weak, nonatomic) id<IESECLiveGoodsTitleLabelDelegate> delegate;

- (void)didFinishLoad;
- (void)setTitle:(id)a0 platformTags:(id)a1;
- (void)setTitle:(id)a0 tags:(id)a1;
- (id)buildGoodsTitle:(id)a0;
- (id)titleAttritedStringWithContent:(id)a0;
- (id)buildTitle:(id)a0 tags:(id)a1;
- (id)buildTitle:(id)a0 platformTags:(id)a1;
- (id)tagImageViewAtIndex:(unsigned long long)a0;
- (id)platformTagViewAtIndex:(unsigned long long)a0;
- (id)tagsAttributedStringWithTags:(id)a0;
- (id)buildTitle:(id)a0 tagsAttributedString:(id)a1;
- (id)platformTagsAttributedStringWithTags:(id)a0;
- (struct CGSize { double x0; double x1; })recalculateTagImageViewSizeByExpectedTagIconHeight:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)rebuild;

@end
