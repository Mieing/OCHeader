@class NSString, ChatLogSessionItemInfo;

@interface ChatLogDataSessionInfo : NSObject <PBCoding>

@property (retain, nonatomic) ChatLogSessionItemInfo *sessionItem;
@property (nonatomic) long long videoDirMTime;
@property (nonatomic) long long audioDirMTime;
@property (nonatomic) long long imageDirMTime;
@property (nonatomic) long long wxamDirMTime;
@property (nonatomic) long long vcodeDirMTime;
@property (nonatomic) long long appDirMTime;
@property (nonatomic) long long groupDirMTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionItem;
+ (void)PBArrayAdd_videoDirMTime;
+ (void)PBArrayAdd_audioDirMTime;
+ (void)PBArrayAdd_imageDirMTime;
+ (void)PBArrayAdd_wxamDirMTime;
+ (void)PBArrayAdd_vcodeDirMTime;
+ (void)PBArrayAdd_appDirMTime;
+ (void)PBArrayAdd_groupDirMTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
