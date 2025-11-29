@class NSMutableArray, BaseResponse;

@interface FinderLiveKtvGetMusicBoardTypeListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *boardTypeInfoList;
@property (nonatomic) BOOL hasKgAuthorized;
@property (nonatomic) unsigned int defaultBoardType;
@property (nonatomic) unsigned int defaultSubBoardType;

+ (void)initialize;

@end
