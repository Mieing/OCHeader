@class NSString;

@interface WCAdFeedDisplayInfo : NSObject <NSCoding>

@property (nonatomic) int contentDisplayType;
@property (nonatomic) int mediaDisplayMode;
@property (nonatomic) int basicRemWidth;
@property (nonatomic) int basicRootFontSize;
@property (nonatomic) double mediaDisplayWidth;
@property (nonatomic) double mediaDisplayHeight;
@property (retain, nonatomic) NSString *mediaIconUrl;
@property (nonatomic) double mediaIconWidth;
@property (nonatomic) double mediaIconHeight;
@property (nonatomic) double mediaIconPaddingRight;
@property (nonatomic) double mediaIconPaddingBottom;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
