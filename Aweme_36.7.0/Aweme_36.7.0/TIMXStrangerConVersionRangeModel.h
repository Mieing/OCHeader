@class NSString;

@interface TIMXStrangerConVersionRangeModel : MTLModel <TIMXStrangerConvVersionRangeModelProtocol>

@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
