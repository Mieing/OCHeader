@class NSString;

@interface AWEIMMessageEmojiConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *unselectedIconUrl;
@property (copy, nonatomic) NSString *unselectedIconDarkUrl;
@property (copy, nonatomic) NSString *defaultIconPath;
@property (copy, nonatomic) NSString *defaultUnselectedIconPath;
@property (copy, nonatomic) NSString *defaultUnselectedIconDarkPath;
@property (copy, nonatomic) NSString *effectUrl;
@property (copy, nonatomic) NSString *displayUrl;
@property (copy, nonatomic) NSString *defaultDisplayPath;
@property (copy, nonatomic) NSString *meText;
@property (copy, nonatomic) NSString *animateFilePath;
@property (copy, nonatomic) NSString *staticFilePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
