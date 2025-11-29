@class NSString;
@protocol ACCMultiStyleAlertBaseParamsProtocol;

@interface AWEACCMultiStyleAlertTemplateImpl : NSObject <ACCMultiStyleAlertProtocol>

@property (copy, nonatomic) id /* block */ configBlock;
@property (nonatomic) BOOL shouldConfigViewBeforeShow;
@property (readonly, nonatomic) id<ACCMultiStyleAlertBaseParamsProtocol> params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParamsProtocol:(id)a0 configBlock:(id /* block */)a1;
- (id)trackerType;
- (void)p_configView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupView;
- (id)createParams;

@end
