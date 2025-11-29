@class NSString;

@interface BDSCDeviceListTagConfigModel : NSObject

@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double centerYOffset;
@property (nonatomic) double height;
@property (nonatomic) double horizontalMargin;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bgColor;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
