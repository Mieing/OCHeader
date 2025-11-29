@class AWENearbyGrouponLargeCardRoomInfo;

@interface AWENearbyGrouponLargeCard : AWEBaseApiModel

@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWENearbyGrouponLargeCardRoomInfo *roomInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)roomInfoJSONTransformer;

- (void).cxx_destruct;

@end
