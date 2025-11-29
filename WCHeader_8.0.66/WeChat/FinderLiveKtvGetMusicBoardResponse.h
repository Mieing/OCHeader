@class NSString, NSData, FinderLiveKtvGetMusicBoardTypeListResponse, NSMutableArray, BaseResponse;

@interface FinderLiveKtvGetMusicBoardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *playBasicInfoList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLiveKtvGetMusicBoardTypeListResponse *typeListResponse;
@property (nonatomic) int realnameRet;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) NSMutableArray *playResourceInfoList;

+ (void)initialize;

@end
