@class NSString;

@interface AWEDTOUnModifyPublishParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *relatedReviewContent;
@property (nonatomic) long long storySourceType;
@property (copy, nonatomic) NSString *shareFrom;
@property (copy, nonatomic) NSString *vsExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
