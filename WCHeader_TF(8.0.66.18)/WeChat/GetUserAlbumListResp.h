@class NSMutableArray;

@interface GetUserAlbumListResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
