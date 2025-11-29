@class NSString, UIViewController, AWEAwemeModel;

@interface AWEIMTransferToChatBaseContext : NSObject <AWEIMTransferToChatBaseContextProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) UIViewController *fromController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
