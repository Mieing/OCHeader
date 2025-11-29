@class FinderObject;

@interface GetAuthorLiveStateRsp : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *finderObject;
@property (nonatomic) BOOL hasLive;

+ (void)initialize;

@end
