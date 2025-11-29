@class NSString;

@interface AWEPOILivePurchaseAtmosphereLayoutItem : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double textSize;
@property (nonatomic) long long num;
@property (nonatomic) double numSize;
@property (nonatomic) double xSize;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;

+ (id)convertItemWithDict:(id)a0;

- (void).cxx_destruct;

@end
