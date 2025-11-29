@class BDPAppPageURL, BDPUniqueID;

@interface BDPBasicAppTask : NSObject

@property (retain, nonatomic) BDPAppPageURL *currentPage;
@property (nonatomic) BOOL showGoHomeButton;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void).cxx_destruct;
- (id)currentContext;
- (id)initWithUniqueID:(id)a0;

@end
