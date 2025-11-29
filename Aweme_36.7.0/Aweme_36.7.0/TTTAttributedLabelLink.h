@class NSDictionary, NSString, NSTextCheckingResult;

@interface TTTAttributedLabelLink : NSObject <NSCoding>

@property (readonly, nonatomic) NSTextCheckingResult *result;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *activeAttributes;
@property (readonly, copy, nonatomic) NSDictionary *inactiveAttributes;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (copy, nonatomic) id /* block */ linkTapBlock;
@property (copy, nonatomic) id /* block */ linkLongPressBlock;

- (id)initWithAttributes:(id)a0 activeAttributes:(id)a1 inactiveAttributes:(id)a2 textCheckingResult:(id)a3;
- (id)initWithAttributesFromLabel:(id)a0 textCheckingResult:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
