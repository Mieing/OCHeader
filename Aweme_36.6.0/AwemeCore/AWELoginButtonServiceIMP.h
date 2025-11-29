@class NSString;

@interface AWELoginButtonServiceIMP : HTSService <AWELoginButtonService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buttonWithUIButtonType:(long long)a0;
- (id)hintLabelWithType:(unsigned long long)a0;
- (id)buttonWithType:(unsigned long long)a0;

@end
