@class NSArray, NSString, UIView;
@protocol AWEIMInputActionBarProtocol, AWEIMInputActionBarMakerDataSource;

@interface AWEIMInputActionBarMaker_FansGroup : NSObject <AWEIMInputActionBarMakable>

@property (retain, nonatomic) UIView<AWEIMInputActionBarProtocol> *actionBar;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *calculatedFansGroupItems;
@property (readonly, copy, nonatomic) NSString *typeString;
@property (retain, nonatomic) UIView *blurContentView;
@property (weak, nonatomic) id<AWEIMInputActionBarMakerDataSource> dataSource;
@property (readonly, nonatomic) NSArray *calculatedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMModuleServiceHTSAdaperClass;

- (double)actionBarHeight;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)resolvedConfig;
- (BOOL)__allowMentionAll;
- (BOOL)__allowMentionOwner;
- (BOOL)__allowShareGoods;
- (BOOL)__allowShareShopwindow;
- (BOOL)__allowFansGroupCoupon;
- (BOOL)__allowLiveGroupAnnouncement;
- (BOOL)__allowSchemaEntryWithIdentifier:(id)a0;
- (id)makeActionBar;
- (void)setActionBarToNil;
- (id)recalculateEntryItems;
- (BOOL)__isFansGroupOwner;
- (id)__defaultEntryItemsForFansGroupOwner;
- (id)__defaultEntryItemsForFansGroupParticipant;
- (BOOL)entryItemContainReplacedSpecialEmoji;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)conversation;

@end
