@class NSString, CachalotMonitorContext, NSIndexPath;
@protocol CachalotMessageDeliverer;

@interface CachalotContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bizDomain;
@property (retain, nonatomic) CachalotMonitorContext *performanceMonitorContext;
@property (weak, nonatomic) id<CachalotMessageDeliverer> messageDeliverer;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
