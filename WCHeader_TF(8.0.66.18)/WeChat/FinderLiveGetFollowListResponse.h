@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetFollowListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int followCount;

+ (void)initialize;

@end
