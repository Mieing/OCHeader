@class NSString;
@protocol HunterVideoViewDelegate, AWEPlayVideoDelegate;

@interface HunterVideoAWEPlayVideoDelegate : NSObject <AWEPlayVideoDelegate>

@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (weak, nonatomic) id<AWEPlayVideoDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
