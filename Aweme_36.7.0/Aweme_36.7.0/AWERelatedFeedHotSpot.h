@class NSString;

@interface AWERelatedFeedHotSpot : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hotspotTimeLine;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *timelineSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
