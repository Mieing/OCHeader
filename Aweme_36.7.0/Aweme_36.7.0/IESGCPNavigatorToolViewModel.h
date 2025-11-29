@class NSString;
@protocol IESGCPNavigatorToolViewDataSource;

@interface IESGCPNavigatorToolViewModel : NSObject <IESGCPNavigatorToolViewDataSource>

@property (weak, nonatomic) id<IESGCPNavigatorToolViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })toolViewSize;
- (double)toolViewWidth;
- (double)toolViewHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })toolViewEdges;
- (id)toolItems;
- (void).cxx_destruct;

@end
