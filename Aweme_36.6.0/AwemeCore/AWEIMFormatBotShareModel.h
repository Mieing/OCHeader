@class NSString, NSDictionary;

@interface AWEIMFormatBotShareModel : NSObject

@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *formatID;
@property (copy, nonatomic) NSString *botID;
@property (copy, nonatomic) NSString *botSecUID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *discussionTopic;
@property (copy, nonatomic) NSString *avatarURLString;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSDictionary *syncedExt;

- (void).cxx_destruct;

@end
