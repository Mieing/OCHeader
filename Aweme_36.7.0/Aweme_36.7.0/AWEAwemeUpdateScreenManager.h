@class NSString;

@interface AWEAwemeUpdateScreenManager : NSObject <AWEAwemeUpdateScreenManagerProtocol>

@property (nonatomic) BOOL clearScreen;
@property (copy, nonatomic) NSString *clearItemID;
@property (nonatomic) double enterClearScreenTime;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) BOOL isCleared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)traceClearScreenStatus:(id)a0 enterMethod:(id)a1 referStr:(id)a2 model:(id)a3;
- (void).cxx_destruct;

@end
