@class NSString, NSDictionary;

@interface BDUGPushSwitchStatus : NSObject

@property (copy, nonatomic) NSString *switchName;
@property (nonatomic) long long isClosed;
@property (copy, nonatomic) NSDictionary *extra;

- (void)mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
