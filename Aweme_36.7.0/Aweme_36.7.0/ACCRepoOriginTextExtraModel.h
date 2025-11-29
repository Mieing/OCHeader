@class NSString;

@interface ACCRepoOriginTextExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSString *hotSpotText;
@property (retain, nonatomic) NSString *hotSpotID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
