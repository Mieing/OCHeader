@class NSString;

@interface BDPAppPreloadRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *schemaString;
@property (nonatomic) long long timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
