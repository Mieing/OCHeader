@class LSIMBulletTemplateModel, NSString, NSDictionary, LSIMBulletContainerPreLayoutInfo;

@interface LSIMBulletContainerContext : NSObject

@property (retain, nonatomic) LSIMBulletTemplateModel *templateModel;
@property (copy, nonatomic) NSDictionary *staticData;
@property (copy, nonatomic) NSDictionary *trackData;
@property (nonatomic) struct CGSize { double width; double height; } dynamicSize;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) id /* block */ clientDataInjectBlock;
@property (copy, nonatomic) NSDictionary *preserveData;
@property (copy, nonatomic) id /* block */ clientDataIsEqualBlock;
@property (nonatomic) long long bulletGenerateType;
@property (nonatomic) long long contentViewGenerateType;
@property (retain, nonatomic) LSIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (copy, nonatomic) id /* block */ monitorParamsInjectBlock;

- (id)initWithTemplateData:(id)a0 staticData:(id)a1 trackData:(id)a2;
- (id)generateInitDataDict;
- (void)updateDynamicSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePreserveData:(id)a0;
- (void).cxx_destruct;

@end
