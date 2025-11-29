@class NSString;

@interface AWEAISearchGetAyncShareInfoResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double coverGenCost;
@property (nonatomic) double coverRequestCost;
@property (nonatomic) double coverImageRequestCost;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *backgroundCover;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *errorMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
