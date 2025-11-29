@class NSString, NSArray, AWEUserModel, NSObject;
@protocol AFDUserListMoreActionDelegate;

@interface AFDUserListMoreActionContext : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long channelID;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (copy, nonatomic) NSArray *supportFunctions;
@property (copy, nonatomic) NSString *lightActionSource;
@property (weak, nonatomic) NSObject<AFDUserListMoreActionDelegate> *actionDelegate;

- (void).cxx_destruct;

@end
