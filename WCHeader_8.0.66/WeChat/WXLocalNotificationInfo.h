@class NSString, NSDictionary, NSDate, NSNumber;

@interface WXLocalNotificationInfo : NSObject

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *foot;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) NSNumber *badge;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *fromUser;
@property (nonatomic) BOOL fromNotFriend;
@property (nonatomic) BOOL showHeadImage;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
