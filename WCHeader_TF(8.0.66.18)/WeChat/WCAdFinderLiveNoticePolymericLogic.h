@class NSString, WCAdvertiseInfo;
@protocol WCAdFinderLiveNoticePolymericLogicDelegate;

@interface WCAdFinderLiveNoticePolymericLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderLiveNoticeId;
@property (nonatomic) unsigned int finderLiveStartTime;
@property (retain, nonatomic) WCAdvertiseInfo *adData;
@property (retain, nonatomic) NSString *snsId;
@property (weak, nonatomic) id<WCAdFinderLiveNoticePolymericLogicDelegate> delegate;

- (id)initWithFinderUsername:(id)a0 finderLiveNoticeId:(id)a1 finderLiveStartTime:(unsigned int)a2 adData:(id)a3 snsId:(id)a4;
- (void)tryToUpdateFinderLiveNoticeStatus;
- (BOOL)willJumpToFinderProfile;
- (void)doLogic;
- (void)updateFinderLiveNoticeStatusRemote;
- (void)onFinderLiveNoticeStatusUpdatedWith:(int)a0;
- (void)submitNotice;
- (void)jumpToProfile;
- (void)reportFinderLiveNoticeReserveResult:(int)a0;
- (BOOL)isFinderLiveAvailable;
- (BOOL)isFinderLiveExpired;
- (void).cxx_destruct;

@end
