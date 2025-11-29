@class NSString, UIView;

@interface WAFlutterTextInputPlatformView : NSObject <FlutterPlatformView>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(id)a0;
- (void).cxx_destruct;

@end
