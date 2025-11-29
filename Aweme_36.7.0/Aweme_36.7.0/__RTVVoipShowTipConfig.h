@class NSString, UIView;

@interface __RTVVoipShowTipConfig : NSObject

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bubbleText;

- (id)initWithIdentifier:(id)a0 bubbleText:(id)a1 direction:(unsigned long long)a2 sourceView:(id)a3;
- (void).cxx_destruct;

@end
