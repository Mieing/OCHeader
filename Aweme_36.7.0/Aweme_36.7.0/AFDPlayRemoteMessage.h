@class NSArray, NSDictionary, NSString, NSNumber;

@interface AFDPlayRemoteMessage : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long feedType;
@property (retain, nonatomic) NSArray *idList;
@property (copy, nonatomic) NSDictionary *itemInfo;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) unsigned long long feedTimestamp;
@property (nonatomic) unsigned long long opTimestamp;
@property (nonatomic) unsigned long long initTimestamp;
@property (nonatomic) BOOL opStatus;
@property (nonatomic) BOOL isClear;
@property (copy, nonatomic) NSArray *progress;
@property (retain, nonatomic) NSNumber *playSpeed;
@property (copy, nonatomic) NSString *rawDataString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
