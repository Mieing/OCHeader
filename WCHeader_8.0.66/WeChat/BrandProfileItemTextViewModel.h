@class NSString, NSMutableArray, UIFont;

@interface BrandProfileItemTextViewModel : BrandProfileItemBaseViewModel {
    struct CGSize { double width; double height; } _mainTitleSize;
    NSMutableArray *_mainTitleStyles;
    long long _mainTitleLineCount;
    struct CGSize { double width; double height; } _partTitleSize;
    NSMutableArray *_partTitleStyles;
    BOOL _isPartTitleTruncated;
    long long _partTitleLineCount;
}

@property (readonly, nonatomic) BOOL isLongText;
@property (readonly, nonatomic) NSString *bottomStr;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (retain, nonatomic) NSMutableArray *textLabelStyles;
@property (readonly, nonatomic) UIFont *mainTitleFont;
@property (readonly, nonatomic) NSString *mainTitleText;
@property (readonly, nonatomic) NSMutableArray *mainTitleStyles;

- (id)tableViewCellClassName;
- (double)calCellHeight;
- (void)clearLayoutCache;
- (BOOL)isShowLargeCover;
- (id)text;
- (double)textMaxWidth;
- (struct CGSize { double x0; double x1; })mainTitleSize;
- (BOOL)hasMainTitle;
- (void)calTitleSizeAndTitleStyles;
- (long long)lineCount;
- (void).cxx_destruct;

@end
