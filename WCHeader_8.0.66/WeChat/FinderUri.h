@class NSString;

@interface FinderUri : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *feedid;
@property (retain, nonatomic) NSString *nonceid;

+ (void)initialize;

@end
