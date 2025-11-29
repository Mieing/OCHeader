@class NSData, NSMutableArray, BaseResponse;

@interface FinderClubGetAuthorResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *authorContact;
@property (nonatomic) unsigned int authorCount;
@property (nonatomic) unsigned int hasJoinClub;

+ (void)initialize;

@end
