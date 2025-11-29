@class NSString, NSMutableArray;

@interface ShootingTemplateTab : WXPBGeneratedMessage

@property (nonatomic) unsigned long long tabId;
@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSMutableArray *tags;
@property (nonatomic) unsigned int tabType;

+ (void)initialize;

@end
