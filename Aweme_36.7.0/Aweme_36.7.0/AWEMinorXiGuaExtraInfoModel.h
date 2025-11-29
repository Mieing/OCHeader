@class NSString, NSArray;

@interface AWEMinorXiGuaExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long IPCategory;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSString *year;
@property (nonatomic) long long status;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *aliasList;
@property (copy, nonatomic) NSArray *relatedStaffList;
@property (copy, nonatomic) NSArray *videoTitleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
