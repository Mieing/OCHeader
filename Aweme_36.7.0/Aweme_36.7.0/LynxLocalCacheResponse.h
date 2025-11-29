@class NSString;
@protocol NSCoding;

@interface LynxLocalCacheResponse : NSObject <LynxLocalCacheResponseProtocol>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id<NSCoding> cacheData;
@property (nonatomic) long long code;

- (void).cxx_destruct;

@end
