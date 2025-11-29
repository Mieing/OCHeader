@class NSArray, NSString;

@interface IESLiveGameContentStreamLayoutServiceImpl : NSObject <IESLiveGameContentStreamLayoutService>

@property (copy, nonatomic) NSArray *layoutHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandleGameContentStreamLayoutWith:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInternal:(BOOL)a1;
- (void)handleGameContentStreamLayoutWith:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutResult:(id /* block */)a1;
- (void)resetStreamLayoutCache;
- (void).cxx_destruct;
- (id)init;
- (void)_registerHandlers;

@end
