@class NSNumber, NSString;

@interface AWEComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *hideMarquee;
@property (retain, nonatomic) NSNumber *numberOfLineInDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
