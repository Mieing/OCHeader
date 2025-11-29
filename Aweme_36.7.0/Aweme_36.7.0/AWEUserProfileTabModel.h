@class NSString, NSNumber;

@interface AWEUserProfileTabModel : NSObject

@property (nonatomic) long long profileTabType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *backupTitle;
@property (nonatomic) BOOL lockIconVisible;
@property (nonatomic) BOOL shouldShowRedDot;
@property (copy, nonatomic) NSString *redDotContentString;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameEn;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSNumber *displayCount;
@property (copy, nonatomic) NSString *tabComponentType;

- (void).cxx_destruct;

@end
