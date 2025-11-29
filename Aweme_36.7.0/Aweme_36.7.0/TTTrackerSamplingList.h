@class NSMutableArray;

@interface TTTrackerSamplingList : NSObject

@property (retain, nonatomic) NSMutableArray *samplings;
@property (nonatomic) long long did;
@property (nonatomic) long long checksum;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long version;
@property (nonatomic) long long count;

+ (id)sharedInstance;

- (void)updateListInternal:(id)a0;
- (void)loadDid;
- (void)loadList;
- (BOOL)hitSamplingForEvent:(id)a0 parameters:(id)a1;
- (void)turnOnEventSampling;
- (void)turnOffEventSampling;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)updateWithResponse:(id)a0;

@end
