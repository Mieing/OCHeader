@class NSSet;

@interface TMNetworkAppModeHandler : NSObject

@property (copy, nonatomic) NSSet *pathReportBlackList;
@property (copy, nonatomic) NSSet *hostReportBlackList;
@property (copy, nonatomic) NSSet *pathCompleteBlackList;
@property (copy, nonatomic) NSSet *hostCompleteBlackList;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (id)markAppModeInRequestWithContext:(id)a0;
- (void)reportForHittingBlackListInResponseWithContext:(id)a0;
- (void).cxx_destruct;

@end
