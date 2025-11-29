@class NSString;

@interface AWEPadDetailReleasePagesController : AWEAwemeNewDetailBaseController <AWEPadDetailReleasePagesProtocol>

@property (nonatomic) BOOL hasReleasePages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadReleasePagesAdapterClass;

- (id)aAWEPadReleasePagesAdapter;
- (void)releaseMiddlePages;
- (void)trackReleaseMiddlePages:(unsigned long long)a0;
- (void)updateDataControllerIfNeeded;
- (void)viewDidAppear;
- (void)viewDidDisappear;

@end
