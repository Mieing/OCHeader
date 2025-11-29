@class NSString;

@interface AWEDTOCommentSocialModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAllowAiClone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
