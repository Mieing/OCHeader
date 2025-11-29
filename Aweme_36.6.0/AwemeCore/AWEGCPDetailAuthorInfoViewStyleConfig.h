@class UIFont;

@interface AWEGCPDetailAuthorInfoViewStyleConfig : NSObject

@property (nonatomic) double avatarImageSize;
@property (retain, nonatomic) UIFont *nickNameFont;
@property (nonatomic) double liveMarkViewSize;

+ (id)defaultStyleConfig;
+ (id)newStrategyStyleConfig;

- (void).cxx_destruct;

@end
