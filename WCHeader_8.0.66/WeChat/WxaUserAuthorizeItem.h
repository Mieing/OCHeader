@class NSString, NSMutableArray;

@interface WxaUserAuthorizeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *scopeItemList;
@property (nonatomic) unsigned int updateTime;

+ (void)initialize;

@end
