@class NSString, BaseResponse;

@interface FinderFileDumpResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int waitType;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
