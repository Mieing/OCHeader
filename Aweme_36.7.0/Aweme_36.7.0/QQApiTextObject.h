@class NSString;

@interface QQApiTextObject : QQApiObject

@property (copy, nonatomic) NSString *text;

+ (id)objectWithText:(id)a0 tagName:(id)a1 messageExt:(id)a2;
+ (id)objectWithText:(id)a0;

- (id)initWithText:(id)a0 tagName:(id)a1 messageExt:(id)a2;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;

@end
