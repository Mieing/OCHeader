@class NSString;

@interface AWEDTOBindChallengeEntry : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *moduleKey;
@property (copy, nonatomic) NSString *orderIndex;
@property (copy, nonatomic) NSString *challengeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
