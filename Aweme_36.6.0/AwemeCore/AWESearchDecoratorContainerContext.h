@class AWESearchDecoratorManagerContext;

@interface AWESearchDecoratorContainerContext : NSObject

@property (nonatomic) long long decoratorBusinessType;
@property (retain, nonatomic) AWESearchDecoratorManagerContext *managerContext;
@property (retain, nonatomic) id businessParams;

- (void).cxx_destruct;

@end
