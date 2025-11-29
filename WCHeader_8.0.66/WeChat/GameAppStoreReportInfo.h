@class NSString;

@interface GameAppStoreReportInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) int uiarea;

+ (id)reportInfoFromDict:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
