@class NSString, NSMutableArray;

@interface TextStatusBrandInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uid;
@property (retain, nonatomic) NSString *subId;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSMutableArray *templates;

+ (void)initialize;

@end
