@class NSArray, NSString;

@interface IESECWinGradientColor : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *colorList;
@property (retain, nonatomic) NSArray *locationList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
