@class NSArray, NSDictionary, NSString, AWEShareContext;

@interface AWEIMShareMessageFromShareContextToShareListContextModel : AWEIMShareMessageContextBaseModel <AWEIMShareMessageFromShareContextToShareListContextModelProtocol>

@property (copy, nonatomic) NSArray *shareList;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) BOOL createGroup;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (copy, nonatomic) id /* block */ shareCompletion;
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
