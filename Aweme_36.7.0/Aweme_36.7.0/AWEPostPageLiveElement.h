@class NSString;

@interface AWEPostPageLiveElement : AWEPostPageElement <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)didFinishBindPhone;
- (void)whetherHasEnteredVideoLiveHighlight;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;

@end
