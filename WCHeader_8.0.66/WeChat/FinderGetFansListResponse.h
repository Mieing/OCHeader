@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetFansListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned long long lastFansId;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSMutableArray *fansContactList;

+ (void)initialize;

@end
