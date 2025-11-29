@class NSString;

@interface IESLiveSingleViewBaseService : NSObject <IESLiveSingleViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needProcessWith:(id)a0;
- (void)handleWith:(id)a0 layoutResult:(id /* block */)a1;
- (id)supportBusinessScenes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainBounds;
- (unsigned long long)serviceType;

@end
