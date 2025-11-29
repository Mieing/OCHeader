@class NSString;

@interface AWETheaterCardUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long renderType;
@property (nonatomic) long long spanSize;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double widthPercent;
@property (nonatomic) double widthHeightRatio;
@property (nonatomic) double margin;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginRight;
@property (nonatomic) double marginBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
