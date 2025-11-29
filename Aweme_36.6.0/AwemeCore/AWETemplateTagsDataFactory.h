@class NSString;

@interface AWETemplateTagsDataFactory : NSObject <AWETemplateTagsDataFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateTextElementWithInfoModel:(id)a0;
+ (id)generateFeedGeneralLableWithModel:(id)a0;
+ (long long)getInsertPriorityWithBusinessStr:(id)a0;
+ (BOOL)builtInTemplateTypeVerify:(unsigned long long)a0;
+ (id)findDetailDataWithDatas:(id)a0 reference:(id)a1;
+ (BOOL)builtInContainersVerify:(id)a0 builtInTemplateType:(unsigned long long)a1;
+ (BOOL)staiticLabelVerify:(id)a0;
+ (BOOL)containersVerify:(id)a0;
+ (BOOL)templateTypeVerify:(long long)a0;
+ (void)containerStyleModelVerify:(id)a0;
+ (BOOL)elementsVerify:(id)a0 template:(long long)a1;
+ (BOOL)elementTypeVerifyWithElementType:(long long)a0 verifyType:(long long)a1;
+ (BOOL)textInfoModelVerify:(id)a0;
+ (BOOL)multiTextInfoModelVerify:(id)a0;
+ (BOOL)multiImageInfoModelVerify:(id)a0;
+ (void)textStyleModelVerify:(id)a0;
+ (void)multiTextStyleModelVerify:(id)a0;
+ (void)imageStyleModelVerify:(id)a0;
+ (BOOL)imageInfoModelVerify:(id)a0;
+ (BOOL)multiImageStyleModelVerify:(id)a0;
+ (BOOL)candidateVerify:(id)a0;
+ (id)generateTagsModelWithContext:(id)a0;
+ (id)generateTagsModelWithStrategyClass:(Class)a0 context:(id)a1;
+ (id)generateFeedGeneralLableWithContext:(id)a0;
+ (id)generateImageElementWithInfoModel:(id)a0;
+ (id)generateMultiImageElementWithInfoModel:(id)a0;
+ (id)generateMultiTextElementWithInfoModel:(id)a0;


@end
