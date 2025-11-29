@class NSString;

@interface AWEGeneralSearchAIButtonModel : NSObject

@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (nonatomic) BOOL disAbleGuideTips;

- (void).cxx_destruct;

@end
