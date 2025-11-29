@class NSString;

@interface CGOrientationManager : CGObject <CGCloudPlayerMessage>

@property (nonatomic) long long currentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRemoteVideoSizeChanged:(id)a2 uid:(id)a3;
- (void)dealloc;

@end
