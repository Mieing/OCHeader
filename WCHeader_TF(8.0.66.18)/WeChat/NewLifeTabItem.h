@class NSString;

@interface NewLifeTabItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSString *tabExtra;
@property (retain, nonatomic) NSString *postGuideText;
@property (nonatomic) unsigned long long newTabId;

+ (void)initialize;

@end
