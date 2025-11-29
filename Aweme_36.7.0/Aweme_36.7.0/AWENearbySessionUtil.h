@class NSString;

@interface AWENearbySessionUtil : NSObject

@property (copy, nonatomic) NSString *appSession;

+ (id)generate32LengthSessionID;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
