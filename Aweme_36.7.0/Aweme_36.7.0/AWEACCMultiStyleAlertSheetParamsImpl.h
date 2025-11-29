@class NSString, NSArray;

@interface AWEACCMultiStyleAlertSheetParamsImpl : AWEACCMultiStyleAlertTemplateParamsImpl <ACCMultiStyleAlertSheetParamsProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ cancelEventBlock;
@property (nonatomic, getter=isReconfigBeforeShow) BOOL reconfigBeforeShow;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAction;

@end
