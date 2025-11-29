@class AWEAwemeModel;

@interface AWEPlayletVIPAndIAAAutoOpenUtilSetupModel : NSObject

@property (copy, nonatomic) id /* block */ getCurrentAwemeModelHandler;
@property (copy, nonatomic) id /* block */ autoUnlockBtnsChangeStateHandler;
@property (copy, nonatomic) id /* block */ getInteractionContext;
@property (retain, nonatomic) AWEAwemeModel *currentChangedModel;

- (void).cxx_destruct;

@end
