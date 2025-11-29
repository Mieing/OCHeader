@class IESGCPDetailContentNode, IESGCPDetailBaseViewModel, NSString, IESGCPDetailBaseView;

@interface IESGCPDetailBaseViewControl : NSObject <IESGCPDIContextSubscriber>

@property (readonly, nonatomic) IESGCPDetailContentNode *content;
@property (readonly, nonatomic) IESGCPDetailBaseViewModel *viewModel;
@property (readonly, nonatomic) IESGCPDetailBaseView *view;
@property (readonly, nonatomic) Class contentViewClass;
@property (readonly, nonatomic) NSString *layoutElementClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
