@class NSMutableDictionary;

@interface IESLivePaidStreamInteractionAuther : NSObject

@property (retain, nonatomic) NSMutableDictionary *authConfigForPaidScenes;

- (id)verifyInteractionAuthDisabled:(unsigned long long)a0 paidStream:(id)a1 room:(id)a2;
- (id)installInteractionAuthConfigForPaidScene:(long long)a0;
- (id)serverControlInteractionType:(unsigned long long)a0 paidStream:(id)a1 room:(id)a2;
- (id)disabledToastForInteractionType:(unsigned long long)a0 paidStream:(id)a1;
- (id)verifyInteractionAuthDisabled:(unsigned long long)a0 paidStream:(id)a1 episode:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
