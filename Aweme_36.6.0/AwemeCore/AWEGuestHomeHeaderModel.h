@class UIColor, NSDictionary, AWEURLModel;

@interface AWEGuestHomeHeaderModel : NSObject

@property (retain, nonatomic) AWEURLModel *darkCoverURL;
@property (retain, nonatomic) AWEURLModel *lightCoverURL;
@property (retain, nonatomic) UIColor *darkCoverColor;
@property (retain, nonatomic) UIColor *lightCoverColor;
@property (nonatomic) long long followingCount;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void).cxx_destruct;

@end
