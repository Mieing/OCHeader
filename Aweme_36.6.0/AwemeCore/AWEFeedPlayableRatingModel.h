@class NSString;

@interface AWEFeedPlayableRatingModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double totalStar;
@property (nonatomic) double currentStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
