@class NSMutableArray;

@interface AFDCameraCustomComponentBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *store;
@property (copy, nonatomic) id /* block */ addComponent;

- (void).cxx_destruct;
- (id)init;
- (id)buildResult;

@end
