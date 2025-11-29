@interface SolitaireReporter : NSObject

+ (void)reportActiveWithSolitaire:(id)a0 FromUser:(id)a1;
+ (void)reportJoinSolitaire:(id)a0 NewSolitaire:(id)a1;
+ (void)reportDropSolitaire:(id)a0 Reason:(unsigned long long)a1;
+ (void)reportFormatInputEnterWithSolitaire:(id)a0 EnterScene:(unsigned long long)a1 ExitType:(unsigned long long)a2;
+ (void)reportTipsShowWithSolitaire:(id)a0;
+ (void)reportClickWithSolitaire:(id)a0 ClickType:(unsigned long long)a1 SourceType:(unsigned long long)a2;
+ (void)reportCommonClickWithSolitaire:(id)a0 ClickType:(unsigned long long)a1 ExpandType:(unsigned long long)a2;
+ (void)reportDeleteExistWithSolitaire:(id)a0 InfoObj:(id)a1;
+ (void)reportExpandSolitaire:(id)a0;

@end
