@class NSMutableOrderedSet, NSString, MMFinderLiveTaskId;

@interface MMFinderLiveConcertCommentMemberHeaderViewModel : NSObject <MMFinderLiveCommentNotifyExt>

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (retain, nonatomic) NSMutableOrderedSet *headerUrlSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onNewNotifyCommentUpdate:(id)a0;
- (id)filterJoinLiveCommentItems:(id)a0;
- (id)getNextHeadImageUrl;
- (unsigned long long)getHeadImgCount;
- (void).cxx_destruct;

@end
