@class NSString, NSArray;

@interface ACCRepoOriginTextModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepoRegister, NSCopying, ACCRepoOriginTextData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOriginTextMode;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bgEffectID;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *hashTagList;
@property (copy, nonatomic) NSString *businessBackgroundColorKey;
@property (nonatomic) unsigned long long originTextStatus;
@property (nonatomic) BOOL shouldHandleBgOffline;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ editorBackDismissBlock;
@property (nonatomic) BOOL shouldUsePushTranslationDelegate;
@property (copy, nonatomic) NSString *configEffectID;
@property (nonatomic) BOOL enableSetShowInPostList;
@property (copy, nonatomic) NSString *signatureContent;
@property (nonatomic) long long initType;
@property (copy, nonatomic) NSString *hashtagText;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) long long tabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)realContent;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)textExtraModels;
- (void)addOriginTextExtraInfo:(id)a0;
- (id)logicContent;
- (void)updateOriginTextStatusToNormalDraftIfNeeded;
- (BOOL)isKeepEditorDraftStatus;
- (BOOL)preferredStatusBarDefault;
- (id)originTextForCheck;
- (id)originTextCount;
- (void)draftWillBeSavedWithID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
