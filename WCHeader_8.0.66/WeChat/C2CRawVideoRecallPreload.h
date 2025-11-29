@class NSString;

@interface C2CRawVideoRecallPreload : WXPBGeneratedMessage

@property (nonatomic) unsigned long long preBackSize;
@property (retain, nonatomic) NSString *originVideoFileid;
@property (nonatomic) unsigned long long preBackOriginVideoSize;
@property (nonatomic) unsigned long long predictDownload;
@property (nonatomic) unsigned int preBackRequest;

+ (void)initialize;

@end
