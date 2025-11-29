@class NSString, NSMutableSet, AnyPromise, NSMutableArray, VideoRingNetProvider;
@protocol VideoRingExclusiveFriendsViewModelDelegate;

@interface VideoRingExclusiveFriendsViewModel : NSObject <VideRingModifyExt>

@property (retain, nonatomic) NSMutableArray *ringbacks;
@property (retain, nonatomic) NSMutableSet *friendUsernameSet;
@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (nonatomic) unsigned long long climinseq;
@property (weak, nonatomic) id<VideoRingExclusiveFriendsViewModelDelegate> delegate;
@property (retain, nonatomic) AnyPromise *preload_friendsRingPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)countOfExclusiveRingbacks;
- (id)dicExistContact;
- (id)fetchRingBacks;
- (id)ringBackAtIndex:(unsigned long long)a0;
- (id)deleteRingbackAtIndex:(unsigned long long)a0;
- (BOOL)hasLoadDataForFriend:(id)a0;
- (long long)uniqueAddObject:(id)a0;
- (void)onExclusiveRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
