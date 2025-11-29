@class NSArray, NSMutableArray, NSString;

@interface AWEACCMultiStyleAlertTemplateParamsImpl : NSObject <ACCMultiStyleAlertBaseParamsProtocol>

@property (retain, nonatomic) NSMutableArray *actionM;
@property (nonatomic, getter=isReconfigBeforeShow) BOOL reconfigBeforeShow;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addAction:(id /* block */)a0;
- (id)createAction;

@end
