@class NSString;

@interface AWEAnchorDisplayInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long intevalTimes;
@property (nonatomic) long long intevalSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
