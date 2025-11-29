@class MMFinderLiveTaskId, MMLiveCommentDataMgr, MMFinderLiveTask, FinderLiveBoxId;

@interface MMFinderLiveCommentDataAppendLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveBoxId *boxIdObj;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;

- (id)initWithTaskId:(id)a0 boxId:(id)a1;
- (id)appendCommentContentFromMySelf:(id)a0 toDataItem:(id)a1 callback:(id /* block */)a2 extra:(id)a3;
- (id)appendCommentContentFromMySelf:(id)a0 toUser:(id)a1 postType:(unsigned long long)a2 callback:(id /* block */)a3 extra:(id)a4;
- (id)appendCommentContentFromMySelf:(id)a0 toUser:(id)a1 postType:(unsigned long long)a2 poiAddrSubStr:(id)a3 callback:(id /* block */)a4 extra:(id)a5;
- (id)appendEmoticonCommentFromMySelf:(id)a0 toUser:(id)a1 callback:(id /* block */)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
