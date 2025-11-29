@class MemSigManager;

@interface MemAppidSig : NSObject <NSCoding> {
    MemSigManager *memSigManager;
}

@property (nonatomic) unsigned int dwAppid;
@property (nonatomic) unsigned int dwPriority;
@property (nonatomic) unsigned int dwTime;
@property (nonatomic) unsigned int dwExpTime;

- (id)init;
- (void)dealloc;
- (void)addAppidSig:(id)a0;
- (id)appidSigByName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)printAppidSig;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
