@class NSString;

@interface AWEECMallFeedPageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
