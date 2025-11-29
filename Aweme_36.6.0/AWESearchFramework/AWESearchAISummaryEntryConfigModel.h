@class NSString, NSArray;

@interface AWESearchAISummaryEntryConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL needForbidActionReport;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long styleType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *gradient;
@property (copy, nonatomic) NSArray *darkGradient;
@property (nonatomic) double iconAlpha;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long expandTime;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *aiChatButtonPosition;
@property (copy, nonatomic) NSString *btm;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
