@class NSString;

@interface WCFinderLiveStarterLiveModeSubItem : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveMode;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *subDetail;
@property (nonatomic) BOOL isInnerItem;
@property (retain, nonatomic) NSString *redDotPathOuter;
@property (retain, nonatomic) NSString *redDotPathInner;
@property (copy, nonatomic) id /* block */ redDotQueryBlock;
@property (copy, nonatomic) id /* block */ redDotExposeBlock;
@property (copy, nonatomic) id /* block */ redDotClickBlock;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL hideSelectButton;
@property (nonatomic) double width;
@property (nonatomic) double originX;
@property (nonatomic) double originY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
+ (void)initialize;
+ (id)getChangeVideoSubItemWithSubItem:(id)a0;
+ (id)getInitVideoModeItem;
+ (id)getInitGameModeItemWithAppId:(id)a0 gameEntryScene:(long long)a1;
+ (id)getGameSubItemWithLiveGameUserInfo:(id)a0 gameEntryScene:(long long)a1;

- (id)getPBPropertyTable;
- (BOOL)isVideoSubItem;
- (BOOL)isAudioSubItem;
- (BOOL)isGameSubItem;
- (id)redDotPath;
- (id)redDotId;
- (unsigned long long)redDotSource;
- (unsigned long long)redDotRefSource;
- (BOOL)canShowRedDot;
- (void)onRedDotExposed;
- (void)onRedDotClicked;
- (void).cxx_destruct;

@end
