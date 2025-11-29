@class NSMutableArray, BaseResponse;

@interface FinderLiveGetAnchorQuestInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *questInstanceList;
@property (retain, nonatomic) NSMutableArray *needGuideTargetTypes;

+ (void)initialize;

@end
