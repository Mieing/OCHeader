@class NSString;

@interface WCSessionSpecialPageData : MMObject <NSCopying>

@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned long long quitTimestampMs;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned int logID;

- (id)toString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
