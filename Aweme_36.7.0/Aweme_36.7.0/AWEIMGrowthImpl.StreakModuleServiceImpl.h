@interface AWEIMGrowthImpl.StreakModuleServiceImpl : HTSService <IESIMStreakModuleService>

- (id)imCanShowStreakFlameInfoModelForConversation:(id)a0;
- (id)imCanShowStreakFlameInfoModelForConversation:(id)a0 peerUser:(id)a1;
- (id)imCanShowStreakFlameInfoModelForIMConversation:(id)a0;
- (id)imStreakInfoChatDataModelForConversation:(id)a0;
- (id)imCanShowStreakInfoChatDataModelForConversation:(id)a0;
- (id)imStreakDisplayManagerWithScene:(unsigned long long)a0;
- (id)imStreakDisplayManagerWithoutFlameView:(unsigned long long)a0;
- (id)imStreakDisplayManagerWithScene:(unsigned long long)a0 attributes:(id)a1 streakIconHeight:(double)a2 isWithoutView:(BOOL)a3;
- (id)cachedIMStreakAttributedStringForKey:(id)a0;
- (void)saveIMStreakAttributedString:(id)a0 forKey:(id)a1;
- (BOOL)switchEnableConsecutiveChatDisplayWithConversation:(id)a0;
- (BOOL)enableConsecutiveChatDisplayWithConversation:(id)a0 peerUser:(id)a1;
- (id)streakStrategyParseDecisionParamsWithConversation:(id)a0;
- (BOOL)enableDisplayStreakForIMConversation:(id)a0;
- (id)streakIconURLWithConversation:(id)a0;
- (id)streakIconImageWithConversation:(id)a0;
- (struct CGSize { double x0; double x1; })getStreakContentSizeWithStreakView:(id)a0;
- (id)getStreakTextWithStreakView:(id)a0;
- (id)getStreakViewWithDisplaymanager:(id)a0;
- (id)imStreakFlameInfoModelForConversation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
