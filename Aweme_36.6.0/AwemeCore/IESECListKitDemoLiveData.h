@class IESECListKitLiveHotAtmosphereData, NSString, NSArray, IESECListKitDemoCover, IESECListKitDemoAvatar;

@interface IESECListKitDemoLiveData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *liveDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *streamDataOptions;
@property (copy, nonatomic) NSArray *relationTags;
@property (nonatomic) long long status;
@property (nonatomic) long long productCount;
@property (nonatomic) long long totalNum;
@property (nonatomic) long long number;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) IESECListKitDemoCover *cover;
@property (retain, nonatomic) IESECListKitDemoAvatar *avatar;
@property (retain, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *isGuessInstant;
@property (copy, nonatomic) NSString *fulfillArriveTime;
@property (copy, nonatomic) NSString *arriveTimePoint;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *feedLiveCoverShowProductImage;
@property (copy, nonatomic) NSString *feedLiveRecReasonContent;
@property (retain, nonatomic) IESECListKitLiveHotAtmosphereData *hotAtmosphere;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
