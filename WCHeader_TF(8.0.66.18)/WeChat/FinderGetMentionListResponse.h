@class BaseResponse, MentionListLastReadInfo, NSData, ThankRedPackageInfo, FinderMentionList;

@interface FinderGetMentionListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderMentionList *list;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;
@property (retain, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) MentionListLastReadInfo *lastReadInfo;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
