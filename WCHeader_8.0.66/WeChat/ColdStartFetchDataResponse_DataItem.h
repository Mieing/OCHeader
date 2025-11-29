@class NSString;

@interface ColdStartFetchDataResponse_DataItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int fetchType;
@property (retain, nonatomic) NSString *respData;
@property (nonatomic) int errcode;

+ (void)initialize;

@end
