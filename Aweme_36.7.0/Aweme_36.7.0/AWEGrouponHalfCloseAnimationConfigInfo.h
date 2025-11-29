@class NSString;

@interface AWEGrouponHalfCloseAnimationConfigInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long container;
@property (nonatomic) long long target;
@property (nonatomic) double targetScale;
@property (nonatomic) double containerScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
