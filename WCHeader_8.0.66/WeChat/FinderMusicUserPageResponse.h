@class BaseResponse, FinderPreloadInfo, NSData, FinderContact, NSMutableArray;

@interface FinderMusicUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (nonatomic) unsigned int favAvailableFlag;

+ (void)initialize;

@end
