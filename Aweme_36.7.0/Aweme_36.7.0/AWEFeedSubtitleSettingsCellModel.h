@class UIImage, NSString;

@interface AWEFeedSubtitleSettingsCellModel : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (copy, nonatomic) NSString *rightContent;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;

@end
