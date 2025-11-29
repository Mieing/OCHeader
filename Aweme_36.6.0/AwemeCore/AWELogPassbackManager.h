@class NSDictionary, NSMutableDictionary;

@interface AWELogPassbackManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *normalLogPassback;
@property (retain, nonatomic) NSDictionary *hotLogPassback;
@property (retain, nonatomic) NSDictionary *followLogPassback;
@property (retain, nonatomic) NSDictionary *freshLogPassback;

+ (id)sharedInstance;

- (id)feedLogPassbackWithReferString:(id)a0;
- (void)setLogPassback:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
