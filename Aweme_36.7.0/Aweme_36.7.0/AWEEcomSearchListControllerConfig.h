@class NSArray;

@interface AWEEcomSearchListControllerConfig : NSObject

@property (copy, nonatomic) id /* block */ willAddController;
@property (copy, nonatomic) id /* block */ willRemoveController;
@property (copy, nonatomic) NSArray *controllerClassNames;

- (void).cxx_destruct;

@end
