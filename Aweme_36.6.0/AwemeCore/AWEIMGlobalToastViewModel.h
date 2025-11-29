@class AWEIMSecurityGlobalToastContentConfigModel, AWEIMSecurityGlobalToastPushModel_DialogModel, NSString;

@interface AWEIMGlobalToastViewModel : NSObject

@property (retain, nonatomic) AWEIMSecurityGlobalToastPushModel_DialogModel *dialog;
@property (retain, nonatomic) AWEIMSecurityGlobalToastContentConfigModel *model;
@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) id /* block */ nextToastBlock;

- (id)attrbutedStringWithTitle:(id)a0 color:(id)a1 highlightColor:(id)a2 font:(id)a3 alignmentCenter:(BOOL)a4 config:(id)a5 lineSpacing:(double)a6;
- (void)__trackEventWithEventName:(id)a0 actionType:(id)a1 link_type:(id)a2;
- (id)initWithModel:(id)a0 contentModel:(id)a1;
- (id)titleWithConfig:(id)a0;
- (id)floatTipsTitleWithConfig:(id)a0;
- (id)subTitleWithConfig:(id)a0;
- (void).cxx_destruct;

@end
