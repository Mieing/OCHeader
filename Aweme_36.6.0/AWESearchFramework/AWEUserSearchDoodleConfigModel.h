@class NSString;

@interface AWEUserSearchDoodleConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL shouldRedirect;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL shouldShowRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
