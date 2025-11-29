@class NSMutableDictionary;

@interface MemAppidSigManager : NSObject <NSCoding> {
    NSMutableDictionary *appidSigDic;
}

- (id)init;
- (void)dealloc;
- (void)setMemSig:(id)a0;
- (id)memSigByAppid:(unsigned int)a0 andName:(id)a1;
- (void)removeMemSigByAppid:(unsigned int)a0;
- (void)setMemPriority:(unsigned int)a0 andTime:(unsigned int)a1 byAppid:(unsigned int)a2;
- (unsigned int)expireTimeByAppid:(unsigned int)a0 andAppExpTime:(unsigned int)a1;
- (unsigned int)sigTimeByAppid:(unsigned int)a0;
- (unsigned int)topPriorityAppid;
- (void)printAppidSigAll;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
