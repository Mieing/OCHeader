@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderGetLbsListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *lbsResponseList;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int autoQueryInterval;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *materialCity;

+ (void)initialize;

@end
