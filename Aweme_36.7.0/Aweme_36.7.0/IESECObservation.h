@class NSString;

@interface IESECObservation : NSObject

@property (readonly, nonatomic) id /* block */ unObserveHandler;
@property (readonly, nonatomic) NSString *uuid;

- (id)initWithUnObserveHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
