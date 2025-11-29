@class NSString, CSSStyleSheet;

@interface CSSRule : NSObject

@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSString *cssText;
@property (retain, nonatomic) CSSStyleSheet *parentStyleSheet;
@property (retain, nonatomic) CSSRule *parentRule;

- (void).cxx_destruct;

@end
