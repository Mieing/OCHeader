@class AWEIMMessageConversation, AWEShareTokenResponseModel, NSDictionary, NSString, NSError, AWEShareContext;

@interface AWEIMGroupShareCommandTokenProvider : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long shareType;
@property (retain, nonatomic) AWEShareContext *fetchTokenContext;
@property (nonatomic) BOOL noNeedConversation;
@property (copy, nonatomic) NSDictionary *tokenExtraParams;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) AWEShareTokenResponseModel *tokenResponse;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *lastItemID;
@property (nonatomic) BOOL isGeneralPanel;
@property (retain, nonatomic) NSString *pasteDescription;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (id)initWithConversation:(id)a0 shareType:(long long)a1;
- (void)updateConversation:(id)a0;
- (id)initWithShareData:(id)a0 conversation:(id)a1;
- (BOOL)isCreateAndShareScene;
- (BOOL)isShareSceneCreateVideoShare;
- (BOOL)isShareSceneShare;
- (id)tokenDateString;
- (BOOL)__isShareSceneCreateVideoShare;
- (BOOL)__isShareSceneShare;
- (id)fetchTokenItemID;
- (void)updateShareScene:(id)a0;
- (void)updateNoNeedConversation:(BOOL)a0;
- (void)__fetchDataWithCompletionV2:(id /* block */)a0;
- (BOOL)__isCreateAndShareScene;
- (void)updateShareTokenExtraParam:(id)a0;
- (void).cxx_destruct;

@end
