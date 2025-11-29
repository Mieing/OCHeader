@class NSString;

@interface APCDTOGestureSupport : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL tap;
@property (nonatomic) BOOL pan;
@property (nonatomic) BOOL pinch;
@property (nonatomic) BOOL rotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)supportOptions;
- (void)updateWithSupportOptions:(long long)a0;
- (id)init;

@end
