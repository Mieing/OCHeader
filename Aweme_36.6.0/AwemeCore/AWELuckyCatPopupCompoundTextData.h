@class AWELuckyCatPopupText, AWELuckyCatPopupTextBackground, NSString, AWELuckyCatPopupSpaceModel, AWELuckyCatPopupIcon, NSNumber;

@interface AWELuckyCatPopupCompoundTextData : MTLModel <MTLJSONSerializing, AWELuckyCatPopupWidgetUICommonData>

@property (retain, nonatomic) AWELuckyCatPopupText *text;
@property (retain, nonatomic) AWELuckyCatPopupTextBackground *bg;
@property (retain, nonatomic) AWELuckyCatPopupIcon *icon;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) AWELuckyCatPopupSpaceModel *space;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)spaceJSONTransformer;
+ (id)bgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
