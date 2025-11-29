@class NSLock, NSMutableDictionary, NSArray;

@interface BDATMacroTokenFactory : NSObject

@property (retain, nonatomic) NSLock *macroLock;
@property (retain, nonatomic) NSMutableDictionary *macroTokens;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)sharedModule;

- (void)registMacroTokens:(id)a0;
- (void)unregistMacroToken:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
