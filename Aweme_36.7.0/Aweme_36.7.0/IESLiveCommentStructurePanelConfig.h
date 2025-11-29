@class NSString, NSMutableDictionary, NSArray;

@interface IESLiveCommentStructurePanelConfig : NSObject

@property (copy, nonatomic) NSString *panelViewType;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *expandEntryDetailConfig;
@property (copy, nonatomic) NSArray *expandEntryDenyList;
@property (copy, nonatomic) NSArray *expandEntryAllowList;
@property (nonatomic) long long commentEnterSource;
@property (copy, nonatomic) NSString *requestSource;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long draftSource;
@property (nonatomic) BOOL hidePaidDanmaku;
@property (copy, nonatomic) NSString *paidDanmakuDisableString;
@property (nonatomic) unsigned long long defaultExpandEntryType;
@property (copy, nonatomic) id /* block */ commentProcessCompletion;

+ (id)enterSourceStringFromEnum:(long long)a0;
+ (id)entryTypeTagMap;
+ (id)entryTagFromEntryType:(unsigned long long)a0 componentType:(int)a1;
+ (unsigned long long)entryTypeFromEntryTag:(id)a0;
+ (id)configWithReferredUser:(id)a0;
+ (id)simpleInputConfig;
+ (id)defaultConfig;

- (void)setDetailConfigForEntryType:(unsigned long long)a0 detailSetBlock:(id /* block */)a1;
- (void)setActivityEmojiEnable:(BOOL)a0;
- (void)setFusionEmojiEnable:(BOOL)a0;
- (void)setLowPcuGuideChatEmojiEnable:(BOOL)a0;
- (void)setEmoticonDefaultTabWithType:(long long)a0;
- (id)enterSourceString;
- (void)setReferredUser:(id)a0;
- (void)setPaidDanmakuPriceHint:(id)a0;
- (void)setSupportExpandEntriesWithEntryTypes:(id)a0;
- (id)detailConfigForExpandEntryType:(unsigned long long)a0;
- (void)disableExpandEntriesWithEntryTypes:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
