@class NSNumber;
@protocol ACCAIGCUnifyLoadingViewDelegate;

@interface ACCTransAsyncButton : ACCAnimatedButton

@property (weak, nonatomic) id<ACCAIGCUnifyLoadingViewDelegate> delegate;
@property (retain, nonatomic) NSNumber *trackUploadCount;

- (void)trackBottomTransAsyncButtonEnable;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)setHidden:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;

@end
