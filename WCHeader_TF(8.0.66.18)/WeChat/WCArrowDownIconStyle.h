@class NSString;

@interface WCArrowDownIconStyle : NSObject <NSCoding>

@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) double layoutWidth;
@property (nonatomic) double layoutHeight;
@property (nonatomic) double paddingBottom;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
