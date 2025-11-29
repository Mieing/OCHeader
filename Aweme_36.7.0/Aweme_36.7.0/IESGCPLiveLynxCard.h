@class UIView;
@protocol IESHYContainerProtocol;

@interface IESGCPLiveLynxCard : NSObject <IESGCPLynxCardViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;

- (id)kitView;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)scrollView;

@end
