@class NSString, NSBundle;

@interface AWEFeedFirstPublishStimulateView : UIView <LOTImageCache, AWEFirstPublishStimulateProtocol>

@property (retain, nonatomic) NSBundle *feedBundle;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstPublishStimulateView;
+ (id)addFirstPublishStimulateView;
+ (id)addFirstPublishStimulateViewWithCompletion:(id /* block */)a0;

- (void)addMaskView;
- (void)addStimulateAnimation;
- (id)imageWithClipImage:(id)a0;
- (void)preLoadUserAvatarImage;
- (void)setUp;
- (void).cxx_destruct;
- (id)imageForKey:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
