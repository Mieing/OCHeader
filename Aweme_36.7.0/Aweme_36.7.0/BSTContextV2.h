@class NSString, UIView;

@interface BSTContextV2 : BSTContext

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *ruleKey;
@property (copy, nonatomic) id /* block */ reporter;

+ (id)contextWithView:(id)a0 btm:(id)a1 eventName:(id)a2 uniqueKey:(id)a3 ruleKey:(id)a4 reporter:(id /* block */)a5;

- (id)initWithView:(id)a0 btm:(id)a1 eventName:(id)a2 uniqueKey:(id)a3 ruleKey:(id)a4 reporter:(id /* block */)a5;
- (void).cxx_destruct;

@end
