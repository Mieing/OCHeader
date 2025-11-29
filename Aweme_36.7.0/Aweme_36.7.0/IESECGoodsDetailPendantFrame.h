@class NSNumber, NSString;

@interface IESECGoodsDetailPendantFrame : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long alignType;
@property (retain, nonatomic) NSNumber *verticalOffset;
@property (retain, nonatomic) NSNumber *horizontalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
