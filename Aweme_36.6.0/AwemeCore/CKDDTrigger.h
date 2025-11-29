@class Protocol;

@interface CKDDTrigger : NSObject <NSCopying>

@property (readonly, nonatomic) Protocol *interface;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL async;

- (id)initWith:(id)a0 selector:(SEL)a1;
- (id)initWith:(id)a0 selector:(SEL)a1 async:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
