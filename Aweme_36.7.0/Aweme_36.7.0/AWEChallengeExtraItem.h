@class NSString;

@interface AWEChallengeExtraItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL isImages;
@property (nonatomic) BOOL sortAvailable;
@property (nonatomic) BOOL isNearBy;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *nearbyHashtagStickerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
