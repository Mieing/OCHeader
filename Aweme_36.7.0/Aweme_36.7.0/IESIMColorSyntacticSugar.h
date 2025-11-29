@protocol IESIMColorService;

@interface IESIMColorSyntacticSugar : NSObject

@property (weak) id<IESIMColorService> service;

+ (id)shared;

- (void).cxx_destruct;

@end
