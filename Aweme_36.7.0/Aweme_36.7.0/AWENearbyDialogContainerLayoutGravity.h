@class NSString;

@interface AWENearbyDialogContainerLayoutGravity : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL left;
@property (nonatomic) BOOL right;
@property (nonatomic) BOOL top;
@property (nonatomic) BOOL bottom;
@property (nonatomic) BOOL center;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
