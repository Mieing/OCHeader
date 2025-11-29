@interface UnitRCWeakPtr : NSObject {
    id objcStrong;
    id objcWeak;
}

+ (id)initWith:(id)a0;

- (id)lock;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
