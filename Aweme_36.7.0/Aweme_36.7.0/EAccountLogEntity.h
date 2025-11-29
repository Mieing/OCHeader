@class NSString;

@interface EAccountLogEntity : NSObject

@property (nonatomic) double beginRequestTime;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) NSString *ep;
@property (nonatomic) long long rt;
@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSString *errorParams;
@property (retain, nonatomic) NSString *msg;
@property (retain, nonatomic) NSString *api;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
