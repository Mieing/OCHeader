@class NSString;

@interface OpLogClientCheckGetAppList : WXPBGeneratedMessage

@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *appList;
@property (nonatomic) int isRoot;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSString *checkSum;

+ (void)initialize;

@end
