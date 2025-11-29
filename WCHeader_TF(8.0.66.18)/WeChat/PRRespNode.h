@class NSString, NSMutableArray, ResourceMeta;

@interface PRRespNode : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pid;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSMutableArray *notice;
@property (nonatomic) unsigned int ptype;
@property (nonatomic) unsigned int network;
@property (retain, nonatomic) ResourceMeta *info;
@property (nonatomic) unsigned int maxdown;
@property (retain, nonatomic) NSMutableArray *custom;
@property (nonatomic) BOOL releaseall;
@property (retain, nonatomic) NSMutableArray *infolist;

+ (void)initialize;

@end
