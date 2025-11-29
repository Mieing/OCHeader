@class NSDictionary;

@interface AWEIMMessageListContinuousFoldRuleHelper : NSObject

@property (retain, nonatomic) NSDictionary *ruleMap;

+ (BOOL)enableFold;
+ (id)rulesForCon:(id)a0;

- (id)p_attributedTextWithGroup:(id)a0 conversation:(id)a1 hasBg:(BOOL)a2 msgFillType:(id)a3 maxUserCount:(long long)a4 foldAction:(id /* block */)a5;
- (id)p_msgsAttributedTextWithGroup:(id)a0 conversation:(id)a1 hasBg:(BOOL)a2 msgFillType:(id)a3 foldAction:(id /* block */)a4;
- (void)p_addTapActionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasBg:(BOOL)a1 tapAction:(id /* block */)a2 foldAction:(id /* block */)a3 attributedText:(id)a4;
- (id)p_userModels:(id)a0;
- (id)p_senderModels:(id)a0;
- (id)nickName:(id)a0 conversationID:(id)a1;
- (void)p_addTapActionForModel:(id)a0 hasBg:(BOOL)a1 conversation:(id)a2 attributedText:(id)a3;
- (struct CGSize { double x0; double x1; })sizeForAttr:(id)a0;
- (long long)foldableLimit:(id)a0;
- (BOOL)defaultFoldValue:(id)a0;
- (id)foldIDForMsg:(id)a0;
- (id)attributedTextWithGroup:(id)a0 conversation:(id)a1 hasBg:(BOOL)a2 foldAction:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRules:(id)a0;

@end
