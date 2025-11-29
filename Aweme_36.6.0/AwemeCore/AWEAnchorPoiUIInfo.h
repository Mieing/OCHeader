@class AWEAnchorButton, NSArray, NSString, AWEComponentUIInfo;

@interface AWEAnchorPoiUIInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEComponentUIInfo *uiInfo;
@property (copy, nonatomic) NSArray *labelArray;
@property (retain, nonatomic) AWEAnchorButton *firstButton;
@property (retain, nonatomic) AWEAnchorButton *secondButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiInfoJSONTransformer;
+ (id)labelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
