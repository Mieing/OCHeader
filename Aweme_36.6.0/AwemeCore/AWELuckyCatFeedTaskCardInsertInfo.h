@class NSString;

@interface AWELuckyCatFeedTaskCardInsertInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long delayDuration;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
