@class NSArray, NSString, AWEAwemeModel, NSDictionary;

@interface AWEIMShareCloseFriendMomentMessageContext : AWEIMShareMessageContextBaseModel <AWEIMShareCloseFriendMomentMessageContextProtocol>

@property (copy, nonatomic) NSArray *shareList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *momentType;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (copy, nonatomic) id /* block */ momentCompletedBlock;
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
