@protocol IESIMLoggerService;

@interface IESIMLoggerSyntacticSugar : NSObject

@property (weak) id<IESIMLoggerService> service;

+ (id)shared;

- (void).cxx_destruct;

@end
