@class NSArray, NSString;

@interface BDASplashControlModel : NSObject

@property (nonatomic) long long platform;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSArray *cids;
@property (copy, nonatomic) NSArray *clearCaches;
@property (copy, nonatomic) NSString *logExtra;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
