@class NSString, NSMutableArray;

@interface BizUserAuthorizeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *scopeItemList;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *iconUrl;

+ (void)initialize;

@end
