@class NSArray, NSDictionary;

@interface AWEFeedEcomQueryCardTriggerPlayConfigMeta : NSObject

@property (nonatomic) long long videoProgress;
@property (nonatomic) long long picProgress;
@property (retain, nonatomic) NSArray *cardKey;
@property (retain, nonatomic) NSDictionary *params;

+ (id)metaWithParams:(id)a0;

- (void).cxx_destruct;

@end
