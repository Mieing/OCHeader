@class NSString;

@interface TPCacheObject : NSObject

@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double saveTime;

- (BOOL)isDue;
- (void).cxx_destruct;

@end
