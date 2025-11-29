@class NSString;

@interface AWELeftSideBarBannerExitInfo : NSObject

@property (readonly, nonatomic) NSString *businessID;
@property (readonly, nonatomic) double endTime;
@property (nonatomic) long long showCount;
@property (nonatomic) BOOL didClickCloseButton;

- (id)initWithBusinessID:(id)a0 endTime:(double)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
