@class NSString;

@interface AWEHPTopBarCTAItemConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topExpand;
@property (nonatomic) double bottomExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
