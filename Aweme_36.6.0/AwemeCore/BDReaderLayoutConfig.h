@class NSArray, UIFont;

@interface BDReaderLayoutConfig : NSObject

@property (nonatomic) double textFontSize;
@property (nonatomic) double titleFontSize;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pageInset;
@property (nonatomic) double paragraphSpace;
@property (nonatomic) double characterSpace;
@property (nonatomic) double lineSpace;
@property (nonatomic) BOOL autoFirstLineHeadIndent;
@property (nonatomic) double marginBetweenTitleAndTop;
@property (nonatomic) double marginBetweenContentAndTitle;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL autoAdjustScrollTopInset;
@property (nonatomic) long long paragraphTextAlignment;
@property (nonatomic) long long paragraphTitleAlignment;
@property (nonatomic) unsigned long long layoutEngine;
@property (nonatomic) unsigned long long layoutCacheCount;
@property (nonatomic) BOOL layoutInMainThread;
@property (nonatomic) BOOL titleUnselectionBind;
@property (nonatomic) BOOL needInsertTitle;
@property (copy, nonatomic) NSArray *skipBlankTags;
@property (nonatomic) BOOL combineParser;
@property (nonatomic) BOOL streamLayout;
@property (nonatomic) double tttextSpaceOffset;
@property (nonatomic) BOOL mergeQuotation;

- (void).cxx_destruct;
- (id)init;

@end
