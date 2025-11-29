@class NSString;

@interface AWEChallengeInterveneHotSpotInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long hotSpotId;
@property (copy, nonatomic) NSString *hotSpotText;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *topX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
