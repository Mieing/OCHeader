@interface _TTVideoTrackDataCounter : NSObject

@property (nonatomic) long long cnt;

- (void)reset;
- (void)decrease;
- (void)increase;
- (id)getCount;

@end
