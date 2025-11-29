@class NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface HTSLiveGroupCastMessage : GPBMessage

@property (copy, nonatomic) NSString *tenantId;
@property (copy, nonatomic) NSString *publisherId;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) long long eventTimeMs;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSData *payload;
@property (retain, nonatomic) NSMutableArray *targetUsersArray;
@property (readonly, nonatomic) unsigned long long targetUsersArray_Count;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
