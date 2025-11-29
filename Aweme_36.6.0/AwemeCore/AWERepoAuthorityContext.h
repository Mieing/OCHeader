@class NSString;

@interface AWERepoAuthorityContext : NSObject <NSCopying, NSCoding>

@property (nonatomic) BOOL downloadIgnoreVisibility;
@property (nonatomic) BOOL duetIgnoreVisibility;
@property (nonatomic) BOOL storyShareIgnoreVisibility;
@property (nonatomic) long long downloadVerificationStatus;
@property (nonatomic) long long duetVerificationStatus;
@property (nonatomic) long long storyShareVerificationStatus;
@property (copy, nonatomic) NSString *downloadTypeErrorMessage;
@property (copy, nonatomic) NSString *itemDuetErrorMessage;
@property (copy, nonatomic) NSString *itemShareErrorMessage;

- (BOOL)isDownloadTypeError;
- (BOOL)isItemDuetError;
- (BOOL)isItemShareError;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
