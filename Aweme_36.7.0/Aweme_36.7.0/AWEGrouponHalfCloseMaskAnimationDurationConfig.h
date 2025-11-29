@class NSString;

@interface AWEGrouponHalfCloseMaskAnimationDurationConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long fadeInDuration;
@property (nonatomic) long long fadeOutDuration;
@property (nonatomic) long long shortScanDuration;
@property (nonatomic) long long longScanDuration;
@property (nonatomic) long long scanInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
