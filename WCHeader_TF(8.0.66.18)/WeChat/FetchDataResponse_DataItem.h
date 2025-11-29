@class NSString;

@interface FetchDataResponse_DataItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *data;
@property (nonatomic) int errcode;
@property (nonatomic) unsigned int storeType;

+ (void)initialize;

@end
