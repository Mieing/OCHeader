@class NSString, FinderLiveAppMsg;

@interface WCFinderGroupLiveChatHistoryAppMsgItem : NSObject <PBCoding>

@property (nonatomic) BOOL isLike;
@property (nonatomic) unsigned int likeNumber;
@property (retain, nonatomic) FinderLiveAppMsg *liveAppMsg;
@property (retain, nonatomic) NSString *itemKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isLike;
+ (void)PBArrayAdd_likeNumber;
+ (void)PBArrayAdd_liveAppMsg;
+ (void)PBArrayAdd_itemKey;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
