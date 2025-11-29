@class UIColor, NSString, IESECSymbolIconModel, NSDictionary, IESECLynxTextView;

@interface IESECSymbolRichTextModel : NSObject

@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, nonatomic) UIColor *fontColor;
@property (readonly, nonatomic) long long insertIndex;
@property (readonly, copy, nonatomic) NSString *payload;
@property (readonly, nonatomic) IESECSymbolIconModel *symbolIcon;
@property (readonly, weak, nonatomic) IESECLynxTextView *textView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayedRange;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) long long start;
@property (readonly, nonatomic) long long end;

- (id)initWithParams:(id)a0 textView:(id)a1;
- (void)insertSymbolTextWithStarIndex:(long long)a0;
- (id)symbolRichTextWithStart:(long long)a0;
- (BOOL)isValidRangeForUpdate;
- (BOOL)isIntersectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)updateSymbolTextWithAttributedText:(id)a0;
- (BOOL)hasIcon;
- (void).cxx_destruct;
- (id)string;
- (long long)startIndex;

@end
