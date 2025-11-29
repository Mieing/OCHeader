@class AWELiveRoomPullData, NSString;

@interface AWELiveRoomCoreSDKData : AWEBaseApiModel

@property (retain, nonatomic) AWELiveRoomPullData *pullData;
@property (copy, nonatomic) NSString *size;

+ (id)pullDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)liveCoreSDKData;
- (id)initWithCoreSDKData:(id)a0;
- (void).cxx_destruct;

@end
