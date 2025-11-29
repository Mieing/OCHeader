@class NSString;

@interface BDPStarkRuntime : BDPRuntime

@property (copy, nonatomic) NSString *mpLoadEventKey;
@property (copy, nonatomic) NSString *frontendSDKVersion;

- (id)initWithCoreCompleteBlk:(id /* block */)a0;
- (void)updateUniqueID:(id)a0;
- (void)setupGameContext;
- (void)eventMpJsLoadStart;
- (void).cxx_destruct;

@end
