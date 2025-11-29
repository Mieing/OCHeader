@class NSString;

@interface AWEShareBookBaseService : AWEShareCommonImpl <AWEShareBook>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithBook:(id)a0 logExtraDict:(id)a1 onViewController:(id)a2;
- (id)contextWithBook:(id)a0;
- (id)statsShareBookStage;

@end
