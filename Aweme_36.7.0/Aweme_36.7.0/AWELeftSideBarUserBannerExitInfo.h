@class NSString, NSMutableDictionary;

@interface AWELeftSideBarUserBannerExitInfo : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableDictionary *bannerExitInfoMap;

- (id)initWithUserID:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
