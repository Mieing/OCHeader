@class NSString;

@interface TSPKDetectTrigger : NSObject

@property (copy, nonatomic) NSString *interestAPIType;
@property (copy, nonatomic) id /* block */ detectAction;

- (void)updateWithParams:(id)a0;
- (BOOL)canHandelEvent:(id)a0;
- (void)decodeParams:(id)a0;
- (id)initWithParams:(id)a0 apiType:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
