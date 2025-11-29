@class NSString;

@interface MagicAdInfo : NSObject

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlForDark;
@property (nonatomic) BOOL isForOldUser;

- (void).cxx_destruct;

@end
