@class StarCdnInfo, NSString, NSData, StarAuthor;

@interface StarData : WXPBGeneratedMessage

@property (nonatomic) unsigned int btype;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *bid;
@property (nonatomic) unsigned long long sid;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) StarAuthor *author;
@property (retain, nonatomic) StarCdnInfo *screenshot;
@property (retain, nonatomic) NSData *bdata;

+ (void)initialize;

@end
