@class NSString, NSData;

@interface WCFinderGlobalPushInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) unsigned int jumpTo;
@property (nonatomic) unsigned int returnTo;
@property (retain, nonatomic) NSData *byPassInfo;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *head;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int authIconType;
@property (nonatomic) unsigned long long demotionFlag;
@property (nonatomic) unsigned long long ctrlFlag;
@property (nonatomic) unsigned int pushType;
@property (nonatomic) unsigned int byPassType;
@property (nonatomic) int failReturnTo;
@property (nonatomic) unsigned int waitStreamTimeout;
@property (nonatomic) unsigned long long pushLevel;
@property (nonatomic) unsigned int alertDisplayTime;
@property (nonatomic) unsigned long long discardType;
@property (nonatomic) BOOL forceOpenFinderEntrance;
@property (nonatomic) BOOL receivedInBackground;
@property (nonatomic) BOOL hadPlaySoundAndAppVibration;
@property (nonatomic) unsigned long long triggerScene;
@property (nonatomic) BOOL hasBeenShown;
@property (copy, nonatomic) NSString *jumpInfo;
@property (copy, nonatomic) NSString *reportExtInfo;
@property (nonatomic) unsigned int lastDeliverTime;
@property (copy, nonatomic) NSString *pushJumpParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_objectID;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_body;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_jumpTo;
+ (void)PBArrayAdd_returnTo;
+ (void)PBArrayAdd_byPassInfo;
+ (void)PBArrayAdd_nonceID;
+ (void)PBArrayAdd_head;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_demotionFlag;
+ (void)PBArrayAdd_ctrlFlag;
+ (void)PBArrayAdd_pushType;
+ (void)PBArrayAdd_byPassType;
+ (void)PBArrayAdd_failReturnTo;
+ (void)PBArrayAdd_waitStreamTimeout;
+ (void)PBArrayAdd_pushLevel;
+ (void)PBArrayAdd_alertDisplayTime;
+ (void)PBArrayAdd_discardType;
+ (void)PBArrayAdd_forceOpenFinderEntrance;
+ (void)PBArrayAdd_receivedInBackground;
+ (void)PBArrayAdd_hadPlaySoundAndAppVibration;
+ (void)PBArrayAdd_triggerScene;
+ (void)PBArrayAdd_hasBeenShown;
+ (void)PBArrayAdd_jumpInfo;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_lastDeliverTime;
+ (void)PBArrayAdd_pushJumpParams;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
