@class NSString, IESGCPLynxElement;

@interface IESGCPLynxView : UIView <IESGCPViewExposedAble>

@property (weak, nonatomic) IESGCPLynxElement *ui;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewExposed;
- (void)onViewAppear;
- (void).cxx_destruct;

@end
