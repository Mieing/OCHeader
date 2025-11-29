@class AWELuckyCatPopupText, NSString, AWELuckyCatPopupTag, AWELuckyCatPopupSpaceModel;

@interface AWELuckyCatPopupAmountData : MTLModel <MTLJSONSerializing, AWELuckyCatPopupWidgetUICommonData>

@property (retain, nonatomic) AWELuckyCatPopupText *text;
@property (retain, nonatomic) AWELuckyCatPopupTag *tag;
@property (retain, nonatomic) AWELuckyCatPopupSpaceModel *space;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagJSONTransformer;
+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
