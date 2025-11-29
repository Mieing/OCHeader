@class NSArray, NSDictionary;

@interface IESLiveInnerFeedTransferRecommendGuideConfigModel : NSObject

@property (nonatomic) BOOL channelGuideEnable;
@property (nonatomic) long long styleType;
@property (nonatomic) BOOL useNewConfig;
@property (nonatomic) double showMillMs;
@property (retain, nonatomic) NSArray *followEntrances;
@property (retain, nonatomic) NSDictionary *entranceItemConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
