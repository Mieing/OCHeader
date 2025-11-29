@class NSString, NSArray;

@interface AVMDLDataLoaderItem : NSObject

@property (nonatomic) unsigned long long preloadSize;
@property (nonatomic) unsigned long long preloadOffset;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *rawKey;
@property (retain, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *quary;
@property (copy, nonatomic) NSString *proxyUrl;

+ (id)item:(unsigned long long)a0 offset:(unsigned long long)a1 key:(id)a2 rawKey:(id)a3 urls:(id)a4;

- (void).cxx_destruct;

@end
