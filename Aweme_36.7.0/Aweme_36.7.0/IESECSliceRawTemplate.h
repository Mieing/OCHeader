@class NSString, NSArray, IESECSliceStyle, NSDictionary;

@interface IESECSliceRawTemplate : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *typeStr;
@property (copy, nonatomic) NSArray *elementItemArray;
@property (retain, nonatomic) IESECSliceStyle *style;
@property (retain, nonatomic) NSDictionary *meta;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
