@class NSString;

@interface ValueAttr : WXPBGeneratedMessage

@property (nonatomic) unsigned int linkType;
@property (retain, nonatomic) NSString *linkWeapp;
@property (retain, nonatomic) NSString *linkAddr;
@property (retain, nonatomic) NSString *linkUrl;
@property (nonatomic) unsigned int textAttr;

+ (void)initialize;

@end
