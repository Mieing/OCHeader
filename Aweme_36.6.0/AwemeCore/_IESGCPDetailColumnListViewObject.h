@class IESGCPDetailBaseViewControl, IESGCPDetailBaseView;

@interface _IESGCPDetailColumnListViewObject : NSObject

@property (nonatomic) BOOL hasBindRealViewModel;
@property (retain, nonatomic) IESGCPDetailBaseViewControl *control;
@property (retain, nonatomic) IESGCPDetailBaseView *contentView;

- (void)createContentViewIfNeeded;
- (void).cxx_destruct;

@end
