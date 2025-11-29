@class NSString, NSObject;

@interface WCFinderPriorityItem : NSObject

@property (copy, nonatomic) NSString *identifierKey;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long batchIndex;
@property (retain, nonatomic) NSObject *dataObj;

- (long long)compareWith:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
