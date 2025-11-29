@class StarCdnInfo, NSString, NSData, StarAuthor;

@interface StarOpt : WXPBGeneratedMessage

@property (nonatomic) unsigned int btype;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *bid;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSData *bdata;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) StarAuthor *author;
@property (retain, nonatomic) StarCdnInfo *screenshot;

+ (void)initialize;

@end
