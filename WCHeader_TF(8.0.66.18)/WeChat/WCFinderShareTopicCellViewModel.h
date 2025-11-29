@class UIFont, NSString, NSURL, NSMutableArray;

@interface WCFinderShareTopicCellViewModel : CommonMessageViewModel {
    struct CGSize { double width; double height; } _viewSize;
    struct CGSize { double width; double height; } _titleSize;
    struct CGSize { double width; double height; } _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    double _titleMaxWidth;
    double _digestMaxWidth;
    UIFont *_titleFont;
    UIFont *_digestFont;
    unsigned int _titleMaxLines;
    unsigned int _digestMaxLines;
}

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double descHeight;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *descText;
@property (readonly, nonatomic) NSURL *iconUrl;
@property (readonly, nonatomic) NSString *groupTitle;
@property (readonly, nonatomic) NSString *poiClassifyId;
@property (readonly, nonatomic) float latitude;
@property (readonly, nonatomic) float longitude;
@property (readonly, nonatomic) int topicType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;
@property (readonly, nonatomic) NSString *titleStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) unsigned int titleMaxLines;
@property (readonly, nonatomic) double titleMaxWidth;
@property (readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property (readonly, nonatomic) NSString *digestStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } digestSize;
@property (readonly, nonatomic) UIFont *digestFont;
@property (readonly, nonatomic) unsigned int digestMaxLines;
@property (readonly, nonatomic) double digestMaxWidth;
@property (readonly, nonatomic) NSMutableArray *digestLabelStyles;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
