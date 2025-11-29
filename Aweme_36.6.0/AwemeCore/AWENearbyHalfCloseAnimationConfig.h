@class AWENearbyHalfCloseAnimationConfigInfo, NSString;

@interface AWENearbyHalfCloseAnimationConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyHalfCloseAnimationConfigInfo *animationConfig;
@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *targetId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
