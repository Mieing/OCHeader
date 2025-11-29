@class NSString;

@interface AWEACCAccessibilityImpl : NSObject <ACCAccessibilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAccessibilityProperty:(id)a0 accessibilityViewIsModal:(BOOL)a1;
- (void)enableAccessibility:(id)a0 traits:(unsigned long long)a1 label:(id)a2;
- (void)setAccessibilityProperty:(id)a0 isAccessibilityElement:(BOOL)a1;
- (BOOL)isVoiceOverOn;
- (void)postAccessibilityNotification:(unsigned int)a0 argument:(id)a1;
- (void)setAccessibilityProperty:(id)a0 accessibilityValue:(id)a1;

@end
