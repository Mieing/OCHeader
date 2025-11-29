@class NSArray, NSString, AWEShareContext;

@interface AWEIMShareMessageUseShareServiceUtilsContextModel : AWEIMShareMessageContextBaseModel <AWEIMShareMessageUseShareServiceUtilsContextProtocol>

@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) BOOL createGroup;
@property (copy, nonatomic) NSArray *shareUsers;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *postScriptText;
@property (nonatomic) BOOL shouldSendNoti;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
