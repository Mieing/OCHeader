@class NSDictionary, NSString;

@interface IESIMTextHighlight : NSObject <IESIMTextHighlightProtocol, NSCopying>

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
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
