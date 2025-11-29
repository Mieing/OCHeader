@class UIViewController, NSString, UITableViewCell, NSMutableArray, WCPlayerView;

@interface WCFinderSceneMarkModel : NSObject <PBCoding>

@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) UITableViewCell *tableViewCell;
@property (weak, nonatomic) WCPlayerView *playerView;
@property (nonatomic) int commentScene;
@property (nonatomic) long long enterTimeStamp;
@property (retain, nonatomic) NSMutableArray *feedMarkArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_enterTimeStamp;
+ (void)PBArrayAdd_feedMarkArray;
+ (void)initialize;
+ (BOOL)isFinderTimelineCommenetScene:(int)a0;
+ (BOOL)isStrongStableEntranceScene:(int)a0;
+ (BOOL)isNoneStableEntranceScene:(int)a0;

@end
