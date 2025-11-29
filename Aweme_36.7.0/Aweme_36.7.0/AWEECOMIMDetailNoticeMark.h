@class NSString;

@interface AWEECOMIMDetailNoticeMark : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long exposeCount;
@property (nonatomic) double exposeDisappearTime;
@property (nonatomic) long long exposeDisappearCount;
@property (nonatomic) long long closeCount;
@property (nonatomic) double closeDisappearTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
