@class NSString, AWEURLModel;

@interface AWEPOIHighlightVideoReviewsStruct : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *avatarThumbUrl;
@property (copy, nonatomic) NSString *highlightReview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
