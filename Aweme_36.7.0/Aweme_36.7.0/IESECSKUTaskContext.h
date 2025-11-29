@class IESECSKUTaskInfoModel, NSDictionary, UIView, IESECSKUShowRequest;
@protocol IESECSKUViewProtocol, IESECSKUContextProtocol;

@interface IESECSKUTaskContext : NSObject

@property (retain, nonatomic) id<IESECSKUContextProtocol> skuContext;
@property (retain, nonatomic) IESECSKUTaskInfoModel *taskInfoModel;
@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (weak, nonatomic) UIView<IESECSKUViewProtocol> *attachedSKUView;
@property (retain, nonatomic) NSDictionary *extraCallbackParams;

- (id)initWithShowRequest:(id)a0;
- (void)updateTaskInfoModel:(id)a0;
- (void).cxx_destruct;
- (void)setupData;

@end
