@class NSString, NSArray;

@interface AWEGrouponGeckoConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *channel;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) unsigned long long leastGeckoID;
@property (nonatomic) BOOL needReload;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
