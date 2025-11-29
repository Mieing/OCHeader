@class NSArray, NSMutableArray, NSString;

@interface SystemMessageViewModel : BaseMessageViewModel <ChatRoomHistoryMgrExt>

@property (nonatomic) BOOL isFirstAccess;
@property (nonatomic) int customRotorElementIndex;
@property (retain, nonatomic) NSArray *customRotorElements;
@property (readonly, nonatomic) NSMutableArray *contentTextStyles;
@property (readonly, nonatomic) double systemTextFontSize;
@property (readonly, nonatomic) long long parserType;
@property (nonatomic) BOOL hasParseForFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityDescription;
- (void)setUpCustomRotorElementWithLinks:(id)a0 withHandler:(id /* block */)a1;
- (id)getCustomRotorItemResultWithPredicate:(id)a0;
- (void)handleTranslate;
- (void)handleSayHello;
- (void)handleSpeakText;
- (void)onMessageForceUpdateLayout;
- (void)onHistoryMsgLoadFail:(id)a0;
- (void)onHistoryMsgLoadSuccess:(id)a0 attachHistoryMsg:(id)a1;
- (void).cxx_destruct;

@end
