@class NSString, NSMutableArray;

@interface WATemplateMsgInfoWrap : MMObject <PBCoding>

@property (nonatomic) BOOL globalSwitchOFF;
@property (retain, nonatomic) NSMutableArray *banAppIdList;
@property (nonatomic) BOOL globalAudioSwitchOFF;
@property (retain, nonatomic) NSMutableArray *msgRecordList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_globalSwitchOFF;
+ (void)PBArrayAdd_banAppIdList;
+ (void)PBArrayAdd_globalAudioSwitchOFF;
+ (void)PBArrayAdd_msgRecordList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
