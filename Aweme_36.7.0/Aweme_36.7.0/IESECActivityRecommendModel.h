@class NSString, IESECURLModel;

@interface IESECActivityRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (copy, nonatomic) NSString *activityURLString;
@property (copy, nonatomic) NSString *activityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
