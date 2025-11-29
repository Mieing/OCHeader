@class NSString;

@interface XFeedLayoutInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL forceSticky;
@property (nonatomic) double topStickyThreshold;
@property (nonatomic) BOOL upThanHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
