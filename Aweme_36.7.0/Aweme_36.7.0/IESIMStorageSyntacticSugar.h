@protocol IESIMStorageService;

@interface IESIMStorageSyntacticSugar : NSObject

@property (weak) id<IESIMStorageService> service;

+ (id)shared;

- (void).cxx_destruct;

@end
