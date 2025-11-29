@class AWELuckyCatPopupText, AWELuckyCatPopupSpaceModel, NSString;

@interface AWELuckyCatPopupHeadTitleData : MTLModel <MTLJSONSerializing, AWELuckyCatPopupWidgetUICommonData>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWELuckyCatPopupText *text;
@property (retain, nonatomic) AWELuckyCatPopupSpaceModel *space;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
