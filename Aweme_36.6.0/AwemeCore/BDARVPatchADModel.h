@interface BDARVPatchADModel : NSObject

@property (readonly, nonatomic) long long patchType;
@property (nonatomic) BOOL isFullScreen;

- (id)initWithPatchAdType:(long long)a0 isFullScreen:(BOOL)a1;
- (id)initWithPatchAdType:(long long)a0;

@end
