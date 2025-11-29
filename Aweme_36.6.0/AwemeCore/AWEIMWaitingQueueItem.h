@class NSString, NSDictionary;

@interface AWEIMWaitingQueueItem : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL saveUserNeedCheckMeFollowStatusAndContactName;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
