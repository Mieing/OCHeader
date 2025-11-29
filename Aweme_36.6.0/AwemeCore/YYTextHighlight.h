@class NSDictionary, NSString;

@interface YYTextHighlight : NSObject <IESIMTextHighlightProtocol, NSCoding, NSCopying>

@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ longPressAction;

+ (id)highlightWithAttributes:(id)a0;
+ (id)highlightWithBackgroundColor:(id)a0;

- (void)setBackgroundBorder:(id)a0;
- (void)_makeMutableAttributes;
- (void)setTextAttribute:(id)a0 value:(id)a1;
- (void)setInnerShadow:(id)a0;
- (void)setStrikethrough:(id)a0;
- (void)setStrokeWidth:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBorder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAttachment:(id)a0;
- (void)setShadow:(id)a0;
- (void)setUnderline:(id)a0;

@end
