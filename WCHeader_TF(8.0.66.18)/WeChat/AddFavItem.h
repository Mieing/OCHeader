@interface AddFavItem : WXPBGeneratedMessage

@property (nonatomic) int favId;
@property (nonatomic) int type;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int updateSeq;

+ (void)initialize;

@end
