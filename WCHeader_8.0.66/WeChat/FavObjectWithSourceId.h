@class NSString;

@interface FavObjectWithSourceId : WXPBGeneratedMessage

@property (nonatomic) unsigned int favId;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *object;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int updateSeq;
@property (nonatomic) unsigned int objectVersion;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *sourceId;

+ (void)initialize;

@end
