@class NSString, NSMutableArray;

@interface WCSessionMatchPagePathInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *lastSessionId;
@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSString *pagePathId;
@property (retain, nonatomic) NSString *sessionPageId;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned long long quitTimestampMs;
@property (nonatomic) unsigned long long interval;
@property (retain, nonatomic) NSMutableArray *pagePaths;

- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
