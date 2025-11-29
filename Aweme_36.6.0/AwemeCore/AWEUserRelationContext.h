@class NSString, NSDictionary, AWEUserModel, NSNumber;

@interface AWEUserRelationContext : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL needMarkFriends;
@property (nonatomic) long long subpageType;
@property (nonatomic) BOOL needFakeFollow;
@property (nonatomic) long long detailType;
@property (retain, nonatomic) NSString *detailUID;
@property (nonatomic) long long fromAction;
@property (retain, nonatomic) NSNumber *hideRecButton;
@property (nonatomic) BOOL isInsert;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
