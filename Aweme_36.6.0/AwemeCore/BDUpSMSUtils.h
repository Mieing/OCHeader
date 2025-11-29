@class NSTimer, NSString, NSDictionary;

@interface BDUpSMSUtils : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *commparameter;
@property (retain, nonatomic) NSDictionary *postParameters;
@property (retain, nonatomic) NSDictionary *header;
@property (nonatomic) int count;
@property (copy, nonatomic) id /* block */ callback;

+ (id)shareInstance;

- (void)addTimer;
- (void)repeatAction;
- (void).cxx_destruct;
- (id)init;

@end
