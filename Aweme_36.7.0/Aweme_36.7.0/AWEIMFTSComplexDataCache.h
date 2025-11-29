@class NSCache, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMFTSComplexDataCache : NSObject

@property (retain, nonatomic) NSCache *groupNamePinyinCache;
@property (retain, nonatomic) NSCache *userNamePinyinCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *cacheModelSemaphore;

- (id)updateGroupNamePinyinOfConversation:(id)a0;
- (id)getGroupNamePinyinOfConversation:(id)a0;
- (id)updateGroupNamePinyinOfConversationId:(id)a0 name:(id)a1;
- (id)getUserPinyinModelOfUser:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
