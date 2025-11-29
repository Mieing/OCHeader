@class NSString, NSMutableArray, BaseResponse;

@interface RadarSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end
