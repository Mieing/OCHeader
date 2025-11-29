@class NSString;

@interface WXKBMessageActionReportObject : NSObject

@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int messageType;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (retain, nonatomic) NSString *emoticonProductId;
@property (retain, nonatomic) NSString *cardUsername;

- (void)report;
- (void).cxx_destruct;

@end
