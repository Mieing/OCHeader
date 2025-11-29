@class NSString;

@interface AWEPOIAnchorBubbleDisplayTime : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long startSeconds;
@property (nonatomic) long long totalSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
