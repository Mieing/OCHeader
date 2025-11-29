@class NSString, NSMapTable;

@interface BDUGLuckyCountDownPendantExcludeService : NSObject <BDUGLuckyCountDownPendantExcludeProtocol>

@property (nonatomic) unsigned long long lastEnteredTaskType;
@property (nonatomic) unsigned long long showingTaskType;
@property (retain, nonatomic) NSMapTable *taskForType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

@end
