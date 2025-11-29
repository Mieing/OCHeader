@class NSString, NSMutableSet;

@interface BDPLiveAuditObserverModel : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSMutableSet *auditIDs;

- (void).cxx_destruct;

@end
