@class NSString, NSMutableDictionary, NSDictionary;

@interface CMCContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *backingStore;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) NSDictionary *info;

- (void)setUnretainedObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
