@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderGetLiveMicCandidateListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
