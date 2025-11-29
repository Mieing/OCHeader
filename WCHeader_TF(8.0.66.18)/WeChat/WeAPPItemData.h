@class NSString, UIImage;

@interface WeAPPItemData : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImageUrl;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned int debugMode;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;

@end
