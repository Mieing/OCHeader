@class NSNumber, NSString, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveNewAudienceFinishAnchorModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSNumber *totalScore;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSNumber *totalUserCount;
@property (copy, nonatomic) NSString *countStr;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
