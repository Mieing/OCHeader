@class NSString, NSArray;

@interface AWEACCMultiStyleAlertNormalParamsImpl : AWEACCMultiStyleAlertTemplateParamsImpl <ACCMultiStyleAlertNormalParamsProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL isButtonAlignedVertically;
@property (nonatomic, getter=isReconfigBeforeShow) BOOL reconfigBeforeShow;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAction;

@end
