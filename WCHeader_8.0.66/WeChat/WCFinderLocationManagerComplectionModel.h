@interface WCFinderLocationManagerComplectionModel : NSObject

@property (nonatomic) BOOL requiredMapLocation;
@property (copy, nonatomic) id /* block */ complectionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (void).cxx_destruct;

@end
