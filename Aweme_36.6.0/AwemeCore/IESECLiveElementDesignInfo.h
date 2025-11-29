@class NSString, NSArray;

@interface IESECLiveElementDesignInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSArray *radius;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (retain, nonatomic) NSString *fontColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
