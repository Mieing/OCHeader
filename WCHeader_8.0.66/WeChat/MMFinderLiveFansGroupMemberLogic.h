@class MMFinderLiveFansGroupMemberSectionInfo, NSData, MMFinderLiveTaskId, MMFinderLiveTask;

@interface MMFinderLiveFansGroupMemberLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberSectionInfo *memberSectionInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) BOOL isFetching;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) BOOL isSelfAnchor;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long lastReqFilterType;

- (id)initWithTaskId:(id)a0;
- (BOOL)fetchFansGroupMemberList:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)fetchFansGroupMemberList:(BOOL)a0 filterType:(unsigned long long)a1 sortType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
