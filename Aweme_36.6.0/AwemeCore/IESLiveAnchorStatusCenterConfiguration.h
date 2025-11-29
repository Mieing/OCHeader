@class NSString, HTSLiveBarStyle, NSDictionary;

@interface IESLiveAnchorStatusCenterConfiguration : NSObject

@property (nonatomic) long long displayMode;
@property (copy, nonatomic) NSString *barText;
@property (retain, nonatomic) HTSLiveBarStyle *barStyle;
@property (copy, nonatomic) NSString *statusImgName;
@property (nonatomic) double statusImgWidth;
@property (retain, nonatomic) NSDictionary *extraDic;

+ (id)configurationWithDisplayMode:(long long)a0;
+ (id)barStyleWithBorder:(BOOL)a0;
+ (id)normalConfiguration;
+ (id)prefIconConfiguration;
+ (id)prefSuggestConfiguration;
+ (id)suggestConfiguration;
+ (id)scriptConfiguration;
+ (id)remindConfiguration;

- (void).cxx_destruct;

@end
