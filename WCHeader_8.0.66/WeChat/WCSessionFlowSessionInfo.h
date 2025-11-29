@class NSString, NSMutableArray;

@interface WCSessionFlowSessionInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *lastSessionId;
@property (retain, nonatomic) NSString *prePage;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned long long quitTimestampMs;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long hashCode;
@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSMutableArray *pagePaths;
@property (retain, nonatomic) NSMutableArray *markPagePathInfos;

- (id)init;
- (id)toString;
- (id)getSessionSingleAttrDictionary;
- (id)getSessionPagePathsAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
