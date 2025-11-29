@class NSString;

@interface AWEDUXLoadingImpl : NSObject <ACCDUXLoadingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showDUXLoadingViewWithScene:(long long)a0 config:(id)a1 onView:(id)a2;

@end
