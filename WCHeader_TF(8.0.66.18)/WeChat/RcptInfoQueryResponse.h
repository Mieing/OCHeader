@class BaseResponse, NSString, RcptInfoList;

@interface RcptInfoQueryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (nonatomic) unsigned int islatest;
@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appusername;
@property (nonatomic) unsigned int isauthority;
@property (retain, nonatomic) NSString *appnickname;

+ (void)initialize;

@end
