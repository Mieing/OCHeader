@protocol ACCJob;

@interface ACCJobAttachmentKey : NSObject <NSCopying>

@property (readonly, nonatomic) id<ACCJob> job;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWith:(id)a0;

@end
