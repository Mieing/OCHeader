@class NSString, UIView;

@interface MMFinderLiveLiteAppPlatformView : NSObject <FlutterPlatformView>

@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformViewWithView:(id)a0;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
