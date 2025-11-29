@class NSDictionary, NSString;

@interface AWEIMEmoticonPageMapComponent : AWEIMComponentBase <AWEIMEmoticonPageMapComponent>

@property (retain, nonatomic) NSDictionary *pageMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)pageWithThemeStyle:(long long)a0;
- (void).cxx_destruct;

@end
