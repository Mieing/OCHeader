@class NSString, AWEURLModel;

@interface AWEAdMaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *promptText;
@property (copy, nonatomic) NSString *featureLable;
@property (copy, nonatomic) NSString *price;
@property (nonatomic) long long feedbackRate;
@property (retain, nonatomic) AWEURLModel *landingPageImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
