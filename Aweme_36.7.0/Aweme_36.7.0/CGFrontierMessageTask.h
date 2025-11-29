@class NSTimer;

@interface CGFrontierMessageTask : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSTimer *timeoutTimer;

- (id)initWithTimer:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
