@class NSString;

@interface GetUserAlbumListReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int pageSize;
@property (retain, nonatomic) NSString *beginTagid;
@property (nonatomic) unsigned int beginCreateTime;

+ (void)initialize;

@end
