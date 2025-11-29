@class NSArray, DIRSConfig;

@interface DIRSComplianceConfiguration : NSObject

@property (weak, nonatomic) DIRSConfig *base;
@property (copy, nonatomic) NSArray *blockedFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
