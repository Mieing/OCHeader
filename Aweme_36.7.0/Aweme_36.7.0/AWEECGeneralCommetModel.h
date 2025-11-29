@class UIImage, NSArray, NSString;

@interface AWEECGeneralCommetModel : NSObject

@property (retain, nonatomic) UIImage *anchorIcon;
@property (copy, nonatomic) NSArray *iconImageURLs;
@property (nonatomic) BOOL hasAnchorType;
@property (copy, nonatomic) NSString *anchorType;
@property (nonatomic) unsigned long long businessType;

- (void).cxx_destruct;

@end
