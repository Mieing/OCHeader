@class ChatroomBindInfo, BindFinderClubInfo, FinderContact, BaseResponse;

@interface FinderGetClubInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned long long permissionFlag;
@property (retain, nonatomic) ChatroomBindInfo *bindInfo;
@property (retain, nonatomic) BindFinderClubInfo *finderInfo;

+ (void)initialize;

@end
