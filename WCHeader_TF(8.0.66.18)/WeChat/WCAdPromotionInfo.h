@class NSString;

@interface WCAdPromotionInfo : NSObject <NSCoding>

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) NSString *barBgColor;
@property (nonatomic) double barBgAlpha;
@property (nonatomic) int leftTitleType;
@property (retain, nonatomic) NSString *leftTitle;
@property (retain, nonatomic) NSString *rightTitle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
