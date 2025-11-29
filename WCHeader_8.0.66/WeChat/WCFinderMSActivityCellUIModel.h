@class NSArray, NSMutableDictionary, RichTextViewConfig;

@interface WCFinderMSActivityCellUIModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheSize;
@property (retain, nonatomic) NSArray *feedDescTextStyles;
@property (retain, nonatomic) RichTextViewConfig *feedDescTextConfig;
@property (nonatomic) BOOL textContentExpand;
@property (nonatomic) long long textLines;
@property (retain, nonatomic) NSArray *feedCommnetTextStyles;
@property (retain, nonatomic) RichTextViewConfig *feedCommnetTextConfig;
@property (nonatomic) long long commnetTextLines;
@property (retain, nonatomic) NSArray *feedLikeListTextStyles;
@property (retain, nonatomic) RichTextViewConfig *feedLikeListTextConfig;
@property (nonatomic) BOOL likeListContentExpand;
@property (nonatomic) long long likeListTextLines;
@property (nonatomic) unsigned long long showScene;
@property (nonatomic) BOOL hideMoreIcon;
@property (nonatomic) BOOL hideStickyTopIcon;

- (void).cxx_destruct;

@end
