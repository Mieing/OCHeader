@class NSString, NSDictionary, UIColor;

@interface IESWalletLinkAttributedItem : NSObject

@property (copy, nonatomic) NSString *wholeText;
@property (copy, nonatomic) NSDictionary *textToLinkDict;
@property (copy, nonatomic) NSDictionary *textRangeDict;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *linkColor;

- (id)initWithText:(id)a0 withLinks:(id)a1;
- (void)calculateRange;
- (id)initWithText:(id)a0 withLinks:(id)a1 withDefaultColor:(id)a2 withLinkColor:(id)a3;
- (void).cxx_destruct;

@end
