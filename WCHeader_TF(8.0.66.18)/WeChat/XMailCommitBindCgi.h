@class XMailSecondPasswordInputViewController, NSString, MMUIViewController, CommitBindXmailRequest;
@protocol XMailCommitBindCgiDelegate;

@interface XMailCommitBindCgi : XMailBaseCgi {
    XMailSecondPasswordInputViewController *m_secPwdInputVC;
}

@property (retain, nonatomic) CommitBindXmailRequest *commitBindRequest;
@property (weak, nonatomic) MMUIViewController *rootViewController;
@property (weak, nonatomic) id<XMailCommitBindCgiDelegate> delegate;
@property (retain, nonatomic) NSString *secPwdKey;

- (id)init;
- (void)prepareBindMailFromBindedQQ;
- (void)prepareBindMailFromMailAddr:(id)a0 ticket:(id)a1;
- (BOOL)startBindWithSecPwd:(id)a0;
- (BOOL)startBindMailFromWXMailWithMailAddr:(id)a0;
- (BOOL)openSecPwdInputViewController;
- (id)currentViewController;
- (BOOL)internalStartBindMailWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
