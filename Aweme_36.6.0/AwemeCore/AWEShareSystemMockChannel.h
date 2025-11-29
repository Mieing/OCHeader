@interface AWEShareSystemMockChannel : AWESharePlatformChannel

@property (readonly, nonatomic) long long mockPlatform;

- (id)initWithMockPlatform:(long long)a0;
- (id)shareType;

@end
