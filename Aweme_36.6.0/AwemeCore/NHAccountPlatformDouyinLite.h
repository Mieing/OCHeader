@class NSString;

@interface NHAccountPlatformDouyinLite : NSObject <NHAccountPlatformProtocol>

@property (copy, nonatomic) id /* block */ authFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestLogin:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)a0;

@end
