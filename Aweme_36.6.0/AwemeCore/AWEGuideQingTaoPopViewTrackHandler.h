@class NSDictionary, NSString, AWEAwemeModel;

@interface AWEGuideQingTaoPopViewTrackHandler : NSObject <AWEGuideVideoPopViewTrackHandlerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackForWindowDidShowWithPopView:(id)a0;
- (void)trackForOpenClickWithPopView:(id)a0 storage:(BOOL)a1;
- (void)trackForCancelClickWithPopView:(id)a0 storage:(BOOL)a1;
- (void)trackForCloseWindowWithPopView:(id)a0 closeType:(long long)a1;
- (id)paramsForShowWithModel:(id)a0 popView:(id)a1;
- (id)initWithAwemeModel:(id)a0 commonParams:(id)a1;
- (void).cxx_destruct;

@end
