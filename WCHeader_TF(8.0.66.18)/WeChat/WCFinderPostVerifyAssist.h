@class AnyPromise, NSString, WCFinderContact;

@interface WCFinderPostVerifyAssist : NSObject <WCFinderUserPageFetchExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) AnyPromise *userPrepare;
@property (retain, nonatomic) AnyPromise *finderPrepare;
@property (copy, nonatomic) id /* block */ fillFinderPrepare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assistWithContact:(id)a0 userPrepareResponse:(id)a1;

- (void)fetchOrWatiPrepare:(id /* block */)a0;
- (id)userPrepareResponse;
- (void)ensurePrepare:(id /* block */)a0;
- (void)dealloc;
- (void)startRequestPrepareResponse;
- (void)tryContinuePostFromDelegateVC:(id)a0;
- (void)showVerityPicker;
- (void)showRealNameVerityPicker;
- (void)startRealNameVerity;
- (void)startEnterpriseVerity;
- (void)OnRealnameVerfitySuccessNotification:(id)a0;
- (void)showForeignRealNameVerifyTips:(id)a0 realNameInfo:(id)a1;
- (void)showForeignRealNameH5Verify:(id)a0 realNameInfo:(id)a1;
- (void)_afterRealNameVerity:(id)a0;
- (void)onFinderUserPageContactInfoUpdate:(id)a0;
- (BOOL)isRealName;
- (BOOL)isContactLogout;
- (void).cxx_destruct;

@end
