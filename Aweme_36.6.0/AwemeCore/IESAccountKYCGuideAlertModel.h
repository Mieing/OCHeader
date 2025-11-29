@class NSString, IESAccountKYCGuideAlertButtonModel, IESAccountKYCGuideAlertAuthButtonModel, IESAccountKYCGuideAlertSchemaButtonModel;

@interface IESAccountKYCGuideAlertModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) IESAccountKYCGuideAlertButtonModel *defaultButtonModel;
@property (retain, nonatomic) IESAccountKYCGuideAlertAuthButtonModel *authButtonModel;
@property (retain, nonatomic) IESAccountKYCGuideAlertSchemaButtonModel *schemaButtonModel;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL needRetry;

- (id)schemaUrl;
- (id)buttonModel;
- (long long)buttonStyleType;
- (long long)buttonOperateType;
- (BOOL)setupAlertModel:(id)a0;
- (id)initWithKYCInfo:(id)a0;
- (id)authBaseParams;
- (void).cxx_destruct;
- (id)buttonTitle;

@end
