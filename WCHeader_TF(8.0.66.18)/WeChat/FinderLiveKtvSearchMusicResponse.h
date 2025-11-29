@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveKtvSearchMusicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *playBasicInfoList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *playResourceInfoList;

+ (void)initialize;

@end
