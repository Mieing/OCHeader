@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetMemberDraftResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int mvObjectBanPost;

+ (void)initialize;

@end
