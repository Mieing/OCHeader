@class NSString, AWESearchOutFlowIconModel, NSNumber;

@interface AWESearchOutFlowAdVideoTag : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchOutFlowIconModel *icon;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBackGroundColor;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *leftRightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
