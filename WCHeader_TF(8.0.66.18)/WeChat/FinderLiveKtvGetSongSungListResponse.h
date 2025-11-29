@class FinderLiveKtvPlayCountInfo, NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderLiveKtvGetSongSungListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *songSungList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLiveKtvPlayCountInfo *playCountInfo;
@property (nonatomic) int realnameRet;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) NSData *reverseLastBuffer;
@property (nonatomic) unsigned int reverseContinueFlag;
@property (nonatomic) BOOL isTargetSongInSungList;

+ (void)initialize;

@end
