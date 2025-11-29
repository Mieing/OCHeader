@class NSString, DUXDialogUIConfigModel;

@interface DUXAlertDialogAction : NSObject <IESIMAlertActionProtocol>

@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disableAutoDismiss;
@property (copy, nonatomic) id /* block */ actionDisableBlock;
@property (retain, nonatomic) DUXDialogUIConfigModel *uiConfig;
@property (nonatomic) unsigned long long use;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ click;
@property (nonatomic) double contentWidth;

+ (id)actionWithStyle:(unsigned long long)a0 title:(id)a1 click:(id /* block */)a2;
+ (id)actionWithStyle:(unsigned long long)a0 title:(id)a1 disableAutoDismiss:(BOOL)a2 click:(id /* block */)a3;

- (void).cxx_destruct;

@end
