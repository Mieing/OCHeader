@class NSString;

@interface CGPCMouseManager : CGObject <XPlayMouseProtocol>

@property (nonatomic) int mouseLastX;
@property (nonatomic) int mouseLastY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)sendMouseKey:(long long)a0 press:(BOOL)a1 deltaX:(int)a2 deltaY:(int)a3 viewWidth:(int)a4 viewHeight:(int)a5;
- (void)sendMouseWhell:(float)a0;
- (void)sendMouseMove:(int)a0 y:(int)a1 viewWidth:(int)a2 viewHeight:(int)a3;
- (void)sendMouseKey:(long long)a0 press:(BOOL)a1 x:(int)a2 y:(int)a3 viewWidth:(int)a4 viewHeight:(int)a5;
- (void)sendMouseMoveDelta:(int)a0 deltaY:(int)a1 viewWidth:(int)a2 viewHeight:(int)a3;

@end
