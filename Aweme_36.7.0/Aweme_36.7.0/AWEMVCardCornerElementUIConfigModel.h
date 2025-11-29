@class NSString;

@interface AWEMVCardCornerElementUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double leftOrRightMargin;
@property (nonatomic) double topOrBottomMargin;
@property (nonatomic) double iconSize;
@property (nonatomic) double textSize;
@property (nonatomic) double iconTextSpacing;
@property (nonatomic) long long textWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
