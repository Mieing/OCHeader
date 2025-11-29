@class NSString;

@interface BDPXScreenCustomButtonShowMorePanelProvider : NSObject <BDPXScreenCustomButtonProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)getButtonAction:(id)a0 viewController:(id)a1;
+ (id)getButtonImage:(id)a0 viewController:(id)a1;
+ (id)accessibilityLabel;


@end
