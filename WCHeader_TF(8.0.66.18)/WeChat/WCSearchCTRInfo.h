@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface WCSearchCTRInfo : NSObject

@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long end;
@property (nonatomic) long long si64SessionId;
@property (nonatomic) long long si64SearchId;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *arrClickType;
@property (retain, nonatomic) NSMutableDictionary *dicItemStatus;
@property (retain, nonatomic) NSMutableDictionary *dicSectionCount;
@property (retain, nonatomic) NSMutableSet *disableSectionSet;
@property (nonatomic) BOOL hasSearchDone;
@property (nonatomic) BOOL hasSearchResult;
@property (nonatomic) BOOL isVoiceInput;
@property (retain, nonatomic) NSString *pardusDocId;
@property (retain, nonatomic) NSString *weshopBuffer;
@property (retain, nonatomic) NSMutableSet *weshopBufferStorage;
@property (nonatomic) unsigned int pageType;
@property (retain, nonatomic) NSString *extInfo;

- (void)countSectionItems;
- (id)countSectionItemsBySortedKeysWithKeys:(id)a0;
- (id)sortedStatusKeys;
- (id)init;
- (void)showSection:(unsigned int)a0 index:(unsigned int)a1 withHandler:(id /* block */)a2;
- (void)exposeSection:(unsigned int)a0 index:(unsigned int)a1 withHandler:(id /* block */)a2;
- (void)exposeSection:(unsigned int)a0 index:(unsigned int)a1;
- (void)exposeSection:(unsigned int)a0 index:(unsigned int)a1 itemUserName:(id)a2;
- (void)exposeSection:(unsigned int)a0 index:(unsigned int)a1 subType:(unsigned int)a2;
- (void)exposeSection:(unsigned int)a0 index:(unsigned int)a1 subType:(unsigned int)a2 itemUserName:(id)a3;
- (void)disableSection:(unsigned int)a0;
- (void)doClick:(unsigned int)a0;
- (void)finishAllSearch;
- (id)genLogString;
- (id)safeKVString:(id)a0;
- (BOOL)isDisabledItemKey:(id)a0;
- (void).cxx_destruct;

@end
