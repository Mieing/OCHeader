@class NSArray, NSString, NSDictionary;

@interface AWEUGPendantCapsuleUIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long capsuleType;
@property (copy, nonatomic) NSArray *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *edgeColor;
@property (copy, nonatomic) NSString *backGroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } capsuleUIFrame;
@property (nonatomic) BOOL needShow;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
