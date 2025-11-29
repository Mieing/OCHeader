@class NSMutableDictionary;

@interface HTSEffectContext : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *pathInfo;
@property (retain, nonatomic) NSMutableDictionary *intensityInfo;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
