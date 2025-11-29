@class NSString, NSNumber;

@interface AFDSchoolStoryBasicInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schoolID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *badgeURL;
@property (retain, nonatomic) NSNumber *distance;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
