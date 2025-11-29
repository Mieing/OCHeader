@class NSString, NSMutableArray, BaseResponse;

@interface GetInfrequentContactsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infrequentContactList;
@property (retain, nonatomic) NSString *context;

+ (void)initialize;

@end
