@class ChatroomBindInfo, BindFinderClubInfo, FinderContact, BaseResponse;

@interface FinderGetClubInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned long long permissionFlag;
@property (retain, nonatomic) ChatroomBindInfo *bindInfo;
@property (retain, nonatomic) BindFinderClubInfo *finderInfo;

+ (void)initialize;

- (void)setFinderInfo:(id)a0;
- (id)finderInfo;
- (void)setBindInfo:(id)a0;
- (id)bindInfo;
- (void)setPermissionFlag:(unsigned long long)a0;
- (unsigned long long)permissionFlag;
- (void)setNextQueryInterval:(unsigned int)a0;
- (unsigned int)nextQueryInterval;
- (void)setContact:(id)a0;
- (id)contact;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
