@class NSString, BaseResponse;

@interface ScanStreetViewResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descriptionXml;

+ (void)initialize;

@end
