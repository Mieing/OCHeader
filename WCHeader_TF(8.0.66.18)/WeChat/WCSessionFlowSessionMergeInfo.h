@class NSString;

@interface WCSessionFlowSessionMergeInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *sid;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long interval;

- (id)toString;
- (id)getSessionMergeAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
