@class NSNumber, NSString;

@interface IESECLiveCardSizeComponentLayoutModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *leftPadding;
@property (retain, nonatomic) NSNumber *centerPadding;
@property (retain, nonatomic) NSNumber *rightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
