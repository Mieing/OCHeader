@class NSString, NSMutableArray;

@interface StatusIconConfig : WXPBGeneratedMessage

@property (nonatomic) long long key;
@property (retain, nonatomic) NSString *configId;
@property (retain, nonatomic) NSMutableArray *iconGroups;
@property (retain, nonatomic) NSMutableArray *icons;

+ (void)initialize;

@end
