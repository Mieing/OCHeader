@class NSString, UIFont, NSAttributedString;

@interface AWEIMChatCellHintAttributedStringCreationContext : NSObject

@property (copy, nonatomic) NSString *prefixString;
@property (retain, nonatomic) UIFont *prefixStringFont;
@property (nonatomic) BOOL disableHighLight;
@property (copy, nonatomic) NSString *splicedString;
@property (retain, nonatomic) UIFont *splicedStringFont;
@property (copy, nonatomic) NSAttributedString *splicedAttributedString;

- (id)initWithPrefixString:(id)a0 splicedAttributedString:(id)a1;
- (id)initWithPrefixString:(id)a0;
- (id)initWithPrefixString:(id)a0 splicedString:(id)a1;
- (void).cxx_destruct;

@end
