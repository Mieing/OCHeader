@class NSString;

@interface AWEIMInnerPlaceholderComponent : AWEIMFlexComponent <AWEIMInnerMessageContentComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)enableDisplay;

@end
