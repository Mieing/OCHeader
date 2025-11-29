@class NSString, NSArray;

@interface IESECAfterLiveGuideCardWindowProduct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productName;
@property (retain, nonatomic) NSArray *imageArray;
@property (nonatomic) long long rankIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
