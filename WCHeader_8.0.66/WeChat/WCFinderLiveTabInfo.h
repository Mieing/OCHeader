@class NSString, NSMutableArray;

@interface WCFinderLiveTabInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL prefechThisTab;
@property (nonatomic) BOOL prefechNextTab;
@property (nonatomic) BOOL prefechPreTab;
@property (nonatomic) BOOL playVoice;
@property (retain, nonatomic) NSMutableArray *subTabList;
@property (nonatomic) unsigned int tabScene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconWording;
@property (retain, nonatomic) NSString *liveSquareIconUrl;
@property (retain, nonatomic) NSMutableArray *liveSquareWordingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tabId;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_prefechThisTab;
+ (void)PBArrayAdd_prefechNextTab;
+ (void)PBArrayAdd_prefechPreTab;
+ (void)PBArrayAdd_playVoice;
+ (void)PBArrayAdd_subTabList;
+ (void)PBArrayAdd_tabScene;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_iconWording;
+ (void)PBArrayAdd_liveSquareIconUrl;
+ (void)PBArrayAdd_liveSquareWordingColor;
+ (void)initialize;
+ (id)finderLiveTabInfoFrom:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithTabId:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genFinderLiveTabInfo;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
