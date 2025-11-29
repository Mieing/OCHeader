@protocol IESIMRouterService;

@interface IESIMRouterSyntacticSugar : NSObject

@property (weak) id<IESIMRouterService> service;

+ (id)shared;

- (void).cxx_destruct;

@end
