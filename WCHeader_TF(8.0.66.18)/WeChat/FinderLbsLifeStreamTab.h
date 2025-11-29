@class NSString, NSMutableArray;

@interface FinderLbsLifeStreamTab : WXPBGeneratedMessage

@property (nonatomic) unsigned long long tabId;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) NSMutableArray *groupList;
@property (nonatomic) unsigned int allowUnselected;
@property (nonatomic) unsigned long long defaultSelectedTabId;

+ (void)initialize;

@end
