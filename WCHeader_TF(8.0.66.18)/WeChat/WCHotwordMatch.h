@class NSString;

@interface WCHotwordMatch : NSObject

@property (readonly, nonatomic) long long scene;
@property (readonly, copy, nonatomic) NSString *hotword;

+ (id)hotwordMatchFromURLString:(id)a0;

- (id)initWithScene:(long long)a0 hotword:(id)a1;
- (BOOL)isValid;
- (id)generateURLString;
- (void).cxx_destruct;

@end
