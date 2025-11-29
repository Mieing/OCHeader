@class NSString;

@interface IESECMallDeepFeedProductSearchBoxInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *imprID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
