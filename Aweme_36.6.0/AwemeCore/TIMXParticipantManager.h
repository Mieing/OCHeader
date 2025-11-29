@class NSMutableDictionary, TIMXThreadSafeMutableDictionary, NSString, TIMXGCDTimer, NSObject, TIMXSDKInstance;
@protocol OS_dispatch_queue;

@interface TIMXParticipantManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *aggregatedModels;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long checkTimeThreshold;
@property (nonatomic) long long blockTimeCheckThreshold;
@property (nonatomic) double aggregatedTime;
@property (nonatomic) long long expVersion;
@property (retain) TIMXGCDTimer *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *processingConvMemberVersionDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkParticipantIntegrityForConvID:(id)a0;
- (long long)memberVersionForConvID:(id)a0;
- (BOOL)bumpServerMemberVersionForConvID:(id)a0 serverMemberVersion:(long long)a1;
- (void)getMemberListWithConvID:(id)a0 shortID:(long long)a1 inboxType:(int)a2 convType:(int)a3 syncScene:(int)a4 localMemberVersion:(long long)a5 limit:(long long)a6 completion:(id /* block */)a7;
- (void)updateParticipantsForConvID:(id)a0 updatedParticipantInfo:(id)a1 removedParticipants:(id)a2 serverMemberVersion:(long long)a3 serverParticipantCount:(long long)a4 completion:(id /* block */)a5;
- (void)updateParticipantsForConvID:(id)a0 diffMemberInfo:(id)a1 serverParticipantCount:(long long)a2 completion:(id /* block */)a3;
- (BOOL)resetMemberVersionForConvID:(id)a0;
- (BOOL)resetServerMemberVersionForConvID:(id)a0;
- (void)aggregateGetMemberListWithConvID:(id)a0 shortID:(long long)a1 inboxType:(int)a2 convType:(int)a3 syncScene:(int)a4 localMemberVersion:(long long)a5 limit:(long long)a6 completion:(id /* block */)a7;
- (void)__getMemberListWithRequestModel:(id)a0 inboxType:(int)a1 limit:(long long)a2;
- (void)__handleLastPageMemberListInfo:(id)a0 memberListModel:(id)a1 completionArray:(id)a2;
- (void)__updateParticipantsForConvID:(id)a0 serverMemberVersion:(long long)a1 diffParticipantsInfo:(id)a2 serverParticipantCount:(long long)a3 memberSource:(int)a4 completionArray:(id)a5;
- (void)__batchGetMemberListWithModels:(id)a0 inboxType:(int)a1 limit:(long long)a2;
- (void)p_updatePBParticipant:(id)a0 withParticipantsModel:(id)a1;
- (BOOL)bumpMemberVersionForConvID:(id)a0 memberVersion:(long long)a1;
- (void)__getMemberListRemedialForConvID:(id)a0 memberSource:(int)a1 localMemberCount:(long long)a2 serverMemberCount:(long long)a3;
- (id)p_parseParticipantFromPBModel:(id)a0 conversationID:(id)a1;
- (long long)serverMemberVersionForConvID:(id)a0;
- (long long)lastCheckTimeForConvID:(id)a0;
- (BOOL)bumpLastCheckTimeForConvID:(id)a0 lastCheckTime:(long long)a1;
- (BOOL)isParticipantEqual:(id)a0 comparedWithNewParticipant:(id)a1 reasonMap:(id)a2;
- (void)batchGetMemberListWithConvID:(id)a0 shortIDMap:(id)a1 inboxType:(int)a2 convTypeMap:(id)a3 syncSceneMap:(id)a4 localMemberVersionMap:(id)a5 limit:(long long)a6;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
