@class NSString, NSArray;

@interface AWESecondPhoneAffirmUtil : NSObject

@property (copy, nonatomic) NSString *remindContent;
@property (copy, nonatomic) NSString *phoneStr;
@property (copy, nonatomic) NSArray *highlightSchemes;
@property (copy, nonatomic) NSArray *highlightContents;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *noticeID;
@property (copy, nonatomic) NSString *noticeTag;

+ (void)checkSecondPhoneIfNeeded:(id /* block */)a0;
+ (void)cleanRemindInfo;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
