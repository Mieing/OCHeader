@class NSMutableDictionary;

@interface AWETeenGeneralCardService : NSObject

@property (retain, nonatomic) NSMutableDictionary *cardDict;

+ (void)registerCardClass:(Class)a0 cardType:(unsigned long long)a1;
+ (id)cardWithModel:(id)a0 forceClass:(Class)a1;
+ (void)unregisterCardClass:(Class)a0 cardType:(unsigned long long)a1;
+ (BOOL)registeredCardType:(unsigned long long)a0;
+ (id)cardWithModel:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
