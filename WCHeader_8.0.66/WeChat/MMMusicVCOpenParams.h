@class MMMusicInfo, MMMusicShareItem, NSString;

@interface MMMusicVCOpenParams : NSObject <PBCoding>

@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (retain, nonatomic) MMMusicShareItem *shareItem;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *sceneID;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) BOOL forbidShowMinimizeWhenExitVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_shareItem;
+ (void)initialize;

- (unsigned long long)MMMusicStatistics_scene;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
