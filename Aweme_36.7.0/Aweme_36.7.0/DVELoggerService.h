@protocol DVELoggerProtocol;

@interface DVELoggerService : NSObject

@property (weak, nonatomic) id<DVELoggerProtocol> logger;

+ (id)shareManager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
