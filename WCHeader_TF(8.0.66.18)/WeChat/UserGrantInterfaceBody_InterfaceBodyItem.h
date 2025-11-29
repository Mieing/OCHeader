@class NSString, NSMutableArray;

@interface UserGrantInterfaceBody_InterfaceBodyItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemId;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) NSString *itemDesc;
@property (retain, nonatomic) NSMutableArray *hideIfList;
@property (retain, nonatomic) NSMutableArray *statusList;

+ (void)initialize;

@end
