@class NSString, NSArray, NSDictionary;

@interface AWEDTOLiveModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *liveType;
@property (copy, nonatomic) NSString *liveId;
@property (copy, nonatomic) NSString *liveTime;
@property (copy, nonatomic) NSArray *watermarkLocation;
@property (copy, nonatomic) NSString *highlightId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *recordStartTime;
@property (copy, nonatomic) NSString *recordEndTime;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *displayId;
@property (copy, nonatomic) NSDictionary *trackExtras;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
