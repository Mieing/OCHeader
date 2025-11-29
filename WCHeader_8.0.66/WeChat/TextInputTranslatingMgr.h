@class NSString;
@protocol TextInputTranslatingMgrDelegate;

@interface TextInputTranslatingMgr : NSObject

@property (nonatomic) unsigned long long lastUpdateTime;
@property (nonatomic) BOOL bInChatRoom;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *nsChatName;
@property (retain, nonatomic) NSString *nsLastUseResult;
@property (weak, nonatomic) id<TextInputTranslatingMgrDelegate> delegate;
@property (retain, nonatomic) NSString *nsTextViewContent;

- (id)initWithDelegate:(id)a0;
- (void)onUseTransResult:(id)a0 newContent:(id)a1;
- (id)getCurrentTextViewContent;
- (void)switchTranslateLanguage:(id)a0 text:(id)a1 inputID:(unsigned long long)a2;
- (BOOL)startTranslateText:(id)a0 inputID:(unsigned long long)a1;
- (BOOL)changeTextViewContent:(id)a0 inputID:(unsigned long long)a1;
- (id)getPrefix;
- (void)requestTransTextWithInputID:(unsigned long long)a0;
- (void)onRecieveTranslateResp:(id)a0 orgMsg:(id)a1 textViewContent:(id)a2 inputID:(unsigned long long)a3;
- (void).cxx_destruct;

@end
