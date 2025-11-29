@class NSString;

@interface FavoritesOnTopStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSString *chatUser;
@property (nonatomic) unsigned int mesLocalID;
@property (nonatomic) unsigned int favLocalId;
@property (retain, nonatomic) NSString *localDataId;
@property (retain, nonatomic) NSString *timeLineId;
@property (nonatomic) BOOL bEditable;
@property (nonatomic) unsigned int lastReportTime;
@property (nonatomic) unsigned int favId;
@property (retain, nonatomic) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatUser;
+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_timeLineId;
+ (void)PBArrayAdd_bEditable;
+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_deviceUUID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
