@class AWELuckyCatPopupText, AWELuckyCatPopupTextBackground, AWELuckyCatPopupTag, NSString, AWELuckyCatPopupSpaceModel, AWELuckyCatPopupIcon;

@interface AWELuckyCatPopupButtonData : MTLModel <MTLJSONSerializing, AWELuckyCatPopupWidgetUICommonData>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWELuckyCatPopupIcon *icon;
@property (retain, nonatomic) AWELuckyCatPopupText *text;
@property (retain, nonatomic) AWELuckyCatPopupTextBackground *bg;
@property (retain, nonatomic) AWELuckyCatPopupSpaceModel *space;
@property (retain, nonatomic) AWELuckyCatPopupTag *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)tagJSONTransformer;
+ (id)spaceJSONTransformer;
+ (id)bgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
