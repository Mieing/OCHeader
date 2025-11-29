@class NSString, UIImage;

@interface WAAppTaskCapsuleBannerInfo : MMObject

@property (retain, nonatomic) NSString *textPrefix;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long mutationType;
@property (nonatomic) BOOL isPersistant;
@property (nonatomic) BOOL needShow;
@property (nonatomic) BOOL showed;

- (id)init;
- (void).cxx_destruct;

@end
