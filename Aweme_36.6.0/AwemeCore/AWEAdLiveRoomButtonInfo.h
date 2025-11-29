@class NSArray, NSString, AWEURLModel;

@interface AWEAdLiveRoomButtonInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEURLModel *extendIcon;
@property (copy, nonatomic) NSArray *midParts;
@property (nonatomic) long long extendType;
@property (nonatomic) long long iconType;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extendIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
