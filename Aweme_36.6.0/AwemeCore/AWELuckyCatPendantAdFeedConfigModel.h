@class NSString;

@interface AWELuckyCatPendantAdFeedConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double speedRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
