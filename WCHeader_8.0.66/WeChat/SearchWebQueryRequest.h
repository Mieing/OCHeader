@class NSString, NSMutableArray, LbsLocationNew;

@interface SearchWebQueryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *commReq;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableArray *extReqParams;
@property (retain, nonatomic) LbsLocationNew *location;

+ (void)initialize;

@end
