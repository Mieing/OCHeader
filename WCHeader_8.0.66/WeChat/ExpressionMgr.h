@class AnimateEmojiConfig, NSString, NSArray, NSDictionary, NSMutableDictionary, DSMMatcher;

@interface ExpressionMgr : MMUserService <MMEmoticonResExt, DSMMatcherDelegate, MMServiceProtocol, IMMLanguageMgrExt> {
    NSString *m_nsTotalEmoticonRegex;
    NSArray *m_qqEmojiKeyList;
    NSArray *m_emojiCodes;
    NSArray *m_emojiDescription;
    NSDictionary *m_emojiDescDic;
    NSDictionary *m_expressionWrapDic;
    NSDictionary *m_descToExpressionWrapDic;
    NSString *m_newEmojiConfigDirPath;
    NSString *m_emojiPanelConfiDirPath;
    NSArray *m_recentUseKeyArray;
    NSString *m_recentUseDataPath;
    NSArray *m_systemEmojiCategoriesNames;
    NSMutableDictionary *m_systemEmojiCategoriesDict;
}

@property (retain, nonatomic) AnimateEmojiConfig *animateEmojiConfig;
@property (retain, nonatomic) NSString *animateEmojiResDir;
@property (retain, nonatomic) DSMMatcher *expressionMatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadExpression;
- (void)configEmoticonRegexWithNewExpressionRegexString:(id)a0;
- (id)emoticonRegexForNewExpressionCongifWithWrapDic:(id)a0 descToWrapDic:(id)a1;
- (void)loadQQEmojiKeyListConfig;
- (id)valueForKey:(const char *)a0 inNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
- (void)loadQQEmojiKeyList;
- (void)loadSystemEmojiKeyList;
- (void)onServiceMemoryWarning;
- (id)getImageByExpression:(id)a0;
- (id)getImagePathByExpression:(id)a0;
- (BOOL)isExpression:(id)a0;
- (BOOL)loadQQEmotionImageByExpression:(id)a0 isSync:(BOOL)a1 completion:(id /* block */)a2;
- (id)getEmojiBoardKeyList;
- (id)getAllSystemEmojiBoardPageList;
- (id)getSystemEmojiBoardKeyList:(id)a0;
- (id)getDescStrByExpression:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfEmoticon:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned int)countOfEmoji:(id)a0;
- (id)getDescStrByEmoji:(id)a0;
- (void)onLanguageChange;
- (id)getEmojiDescriptionAtIndex:(unsigned long long)a0;
- (id)getRecentUseKeyArray;
- (id)rejectInvalidRecentUseKey:(id)a0;
- (void)sendEmojiWithKey:(id)a0 addAsRecentUse:(BOOL *)a1;
- (id)getExpressionMatcherModelPath;
- (void)enumerateItemUsingBlock:(id /* block */)a0;
- (void)onMatchModelErrorHappend;
- (void)buildExpressionSearchModel;
- (id)fastExtractExpressions:(id)a0;
- (id)fastExtractFirstExpressions:(id)a0;
- (BOOL)isContainExpressions:(id)a0;
- (void)onEmoticonResUpdateForSubType:(unsigned int)a0 dirPath:(id)a1;
- (id)getExpressionSymbolArray;
- (void)reloadAnimateEmojiConfig;
- (BOOL)isAnimateEmoji:(id)a0;
- (id)getAnimateEmojiByExpression:(id)a0;
- (unsigned long long)getEmojiAnimVersion;
- (id)getExpressionWrap:(id)a0 loadImageIfNeeded:(BOOL)a1;
- (id)getEmoticonRegex;
- (void).cxx_destruct;

@end
