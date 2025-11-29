@class YataSubscription, NSString;
@protocol YataSubscriber;

@interface YataSubscriptionBox : NSObject

@property (retain, nonatomic) YataSubscription *originalSubscription;
@property (weak, nonatomic) id<YataSubscriber> subscriber;
@property (retain, nonatomic) NSString *identifier;

+ (id)subscriberIdentifier:(id)a0;

- (id)initWith:(id)a0 transformed:(id)a1 subscriber:(id)a2;
- (void)updateValues:(id)a0 with:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
