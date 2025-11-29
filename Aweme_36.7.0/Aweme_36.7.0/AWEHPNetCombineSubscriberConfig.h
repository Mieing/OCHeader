@class NSString;
@protocol AWEHPNetCombineSubscriberProtocol;

@interface AWEHPNetCombineSubscriberConfig : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberProtocol> subscriber;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;

@end
