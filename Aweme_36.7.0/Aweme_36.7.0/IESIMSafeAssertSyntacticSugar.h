@protocol IESIMSafeAssertService;

@interface IESIMSafeAssertSyntacticSugar : NSObject

@property (readonly, weak, nonatomic) id<IESIMSafeAssertService> service;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
