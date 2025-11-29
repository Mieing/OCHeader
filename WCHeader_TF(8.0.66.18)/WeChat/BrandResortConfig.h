@interface BrandResortConfig : NSObject

@property (nonatomic) BOOL useNewPlan;
@property (nonatomic) BOOL needCheckUnReadCount;
@property (nonatomic) unsigned int reqIntervalSec;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int unexposedThreshold;
@property (nonatomic) unsigned int unreadThreshold;
@property (nonatomic) unsigned int reqMsgCountLimit;
@property (nonatomic) unsigned int extraRecMsgCount;
@property (nonatomic) BOOL checkGroupIdChange;
@property (nonatomic) BOOL retrieveInvalidExposedMsg;

- (id)description;

@end
