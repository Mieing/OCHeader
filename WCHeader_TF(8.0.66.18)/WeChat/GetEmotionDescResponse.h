@class NSString, EmotionLinkInfo, NSMutableArray, BaseResponse;

@interface GetEmotionDescResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int clickFlag;
@property (retain, nonatomic) NSString *buttonDesc;
@property (nonatomic) unsigned int downLoadFlag;
@property (nonatomic) unsigned int activityFlag;
@property (retain, nonatomic) EmotionLinkInfo *link;

+ (void)initialize;

@end
