@class NSString;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface __RTVFeedShareControlButton : AWEButton <RTVFeedShareControlButton>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (nonatomic) unsigned long long actionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithActionType:(unsigned long long)a0 imageName:(id)a1;
+ (id)button;
+ (id)imageButton;

- (void)rxAwakeFromPropertyInjection;
- (void)updateImageContentWithImageName:(id)a0;
- (void).cxx_destruct;

@end
