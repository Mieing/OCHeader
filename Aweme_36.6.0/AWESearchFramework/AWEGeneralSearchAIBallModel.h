@class NSString;

@interface AWEGeneralSearchAIBallModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (nonatomic) BOOL disableAIGuideBar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
