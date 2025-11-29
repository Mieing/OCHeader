@class NSArray, NSNumber;

@interface IESForestChannelParameter : NSObject

@property (copy, nonatomic) NSArray *fetcherSequence;
@property (copy, nonatomic) NSArray *shuffleDomains;
@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *disableCdnCache;
@property (retain, nonatomic) NSNumber *cdnRetryTimes;

+ (id)resourceMeta;
+ (id)channelParameterWithAccessKey:(id)a0 channel:(id)a1 bundle:(id)a2 resourceMeta:(id)a3;
+ (BOOL)isValidAccessKey:(id)a0 channel:(id)a1 bundle:(id)a2;
+ (id)dynamicToWaitGeckoUpdate:(id)a0;
+ (id)channelParameterWithAccessKey:(id)a0 channel:(id)a1 bundle:(id)a2;

- (void).cxx_destruct;

@end
