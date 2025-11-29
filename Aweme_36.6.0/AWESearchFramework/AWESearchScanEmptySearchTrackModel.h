@class NSString, NSDictionary;

@interface AWESearchScanEmptySearchTrackModel : NSObject

@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *imprId;
@property (copy, nonatomic) NSString *tosID;
@property (copy, nonatomic) NSDictionary *logPb;
@property (nonatomic) double scanAllocTimeStamp;
@property (nonatomic) double scanDeallocTimeStamp;
@property (nonatomic) double scanLifeDuration;

- (id)buildTrackParams;
- (void)updateExitType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
