@interface AWEGeneralSearchResultBackgroundModel : AWESearchBackgroundModel

@property (nonatomic) double resultBackgroundBlankOffset;
@property (nonatomic) long long hideCorner;
@property (nonatomic) double displayHeight;
@property (nonatomic) double feedMarginTop;
@property (nonatomic) double extraHeight;
@property (nonatomic) double compensationOffset;
@property (nonatomic) unsigned long long cornerType;

+ (id)JSONKeyPathsByPropertyKey;

@end
