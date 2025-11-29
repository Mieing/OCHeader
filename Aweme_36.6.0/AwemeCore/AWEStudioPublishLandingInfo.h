@class NSString, NSArray;

@interface AWEStudioPublishLandingInfo : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) long long landingTab;
@property (nonatomic) long long insertTab;
@property (retain, nonatomic) NSArray *progressTabs;
@property (readonly, nonatomic) NSString *fromStrategy;
@property (nonatomic) BOOL insertAsLandingStrategyForNoLanding;
@property (nonatomic) BOOL progressAsLandingStrategyForNoLanding;

+ (id)landingInfoWithTaskID:(id)a0 landingTab:(long long)a1 insertTab:(long long)a2 progressTabs:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
