@class NSString, NSDictionary;

@interface AWEFormatShareParams : NSObject

@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *botID;
@property (copy, nonatomic) NSString *botSecID;
@property (copy, nonatomic) NSString *formatID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *discussionTopic;
@property (copy, nonatomic) NSString *avatarURLString;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long toastType;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *toastIcon;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
