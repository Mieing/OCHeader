@class NSString, UIView;

@interface IESECBSTContextV2 : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *ruleKey;
@property (copy, nonatomic) id /* block */ reporter;
@property (retain, nonatomic) id uniqueKey;
@property (retain, nonatomic) id uniqueContainer;

+ (id)contextWithView:(id)a0 btm:(id)a1 eventName:(id)a2 uniqueContainer:(id)a3 uniqueKey:(id)a4 ruleKey:(id)a5 reporter:(id /* block */)a6;

- (void).cxx_destruct;

@end
