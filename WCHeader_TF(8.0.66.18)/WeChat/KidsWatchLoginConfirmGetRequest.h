@class NSString, NSData;

@interface KidsWatchLoginConfirmGetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *loginUrl;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSData *extSpamInfo;

+ (void)initialize;

@end
