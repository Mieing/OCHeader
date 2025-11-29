@class NSString, AWECodeGenEntertainmentButtonInfoModel, AWEAwemeModel, NSDictionary;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEBottomButtonPlayletBasePresenter : NSObject <AWEBottomButtonPlayletPresenterProtocol>

@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> delegate;
@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) AWECodeGenEntertainmentButtonInfoModel *buttonInfo;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleButtonClick;
- (id)initWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2 buttonInfo:(id)a3;
- (void).cxx_destruct;

@end
