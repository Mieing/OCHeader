@class NSString;

@interface WSReqModel : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *uin;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSString *clientInfo;
@property (retain, nonatomic) NSString *data;

- (id)init;
- (id)toJsonStr;
- (void).cxx_destruct;

@end
