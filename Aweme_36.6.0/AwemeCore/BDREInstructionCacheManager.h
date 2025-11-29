@class NSDictionary, NSString;

@interface BDREInstructionCacheManager : NSObject

@property (retain, nonatomic) NSDictionary *commandMap;
@property (copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSString *kvStoreID;

+ (id)sharedManager;

- (id)findCommandsForExpr:(id)a0;
- (void)updateInstructionJsonMap:(id)a0 signature:(id)a1;
- (void)loadCommandMap;
- (void)updateCommandMapWithInstructionJsonMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
