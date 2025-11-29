@class NSString;

@interface AWEVideoPublishCommercialAnchorRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorID;
@property (nonatomic) long long anchorBusinessType;
@property (copy, nonatomic) NSString *anchorContent;
@property (nonatomic) long long source;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
