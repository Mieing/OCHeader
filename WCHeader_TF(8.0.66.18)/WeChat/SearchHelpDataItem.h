@class NSDictionary, NSMutableDictionary, ContactSearchMonitor;

@interface SearchHelpDataItem : NSObject

@property (retain, nonatomic) NSDictionary *dicCacheLabelItem;
@property (retain, nonatomic) NSDictionary *dicCacheZoneItem;
@property (retain, nonatomic) NSDictionary *dicCacheContact;
@property (retain, nonatomic) NSDictionary *dicTopHitMMGroupMember;
@property (nonatomic) BOOL isMultiKeyword;
@property (nonatomic) BOOL hasAllContactLoaded;
@property (retain, nonatomic) NSMutableDictionary *dicMultiKeywordMatchFlag;
@property (retain, nonatomic) ContactSearchMonitor *monitor;

- (id)init;
- (void).cxx_destruct;

@end
