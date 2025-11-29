@class NSString, NSNumber, AWEURLModel;

@interface AWEAdConversionAreaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long styleType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) NSNumber *showTextLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableLink;
- (void).cxx_destruct;

@end
