@class NSString, NSNumber;

@interface AWELuckyCatPopupText : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *maxLine;
@property (copy, nonatomic) NSString *typeface;
@property (copy, nonatomic) NSString *hightlightColor;
@property (copy, nonatomic) NSString *hightlightBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
