@class NSString, NSDictionary, AWEAwemeModel, UIView, AWEPageContext;
@protocol AWEPOIDynamicCardProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDCardContext : NSObject <AWEDynamicCardContextProtocol>

@property (weak, nonatomic) UIView<AWEPOIDynamicCardProtocol> *dynamicCard;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIView *feedContainer;
@property (nonatomic) long long feedPosition;
@property (weak, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *playerInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
