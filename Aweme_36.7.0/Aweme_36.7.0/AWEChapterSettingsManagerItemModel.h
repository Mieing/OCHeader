@class NSString;

@interface AWEChapterSettingsManagerItemModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isSwitchButton;
@property (nonatomic) BOOL isSwitchOn;
@property (copy, nonatomic) id /* block */ switchButtonTapped;
@property (nonatomic) double cellHeight;

- (void).cxx_destruct;

@end
