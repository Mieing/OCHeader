@class NSString;

@interface MMLiveAutoTestCheckLogItem : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *log;

- (void).cxx_destruct;

@end
