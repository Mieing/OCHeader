@class WAAuthorizeSheetInfo, WAAuthorizeResultInfo;
@protocol IWAAuthorizePage;

@interface WAAuthPageSheetViewModel : NSObject

@property (retain, nonatomic) WAAuthorizeSheetInfo *infoModel;
@property (weak, nonatomic) id<IWAAuthorizePage> pageSheet;
@property (readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property (nonatomic) BOOL disableAcceptButton;
@property (copy, nonatomic) id /* block */ acceptButtonUpdateAction;
@property (copy, nonatomic) id /* block */ showNeedAcceptProtocolAnimation;
@property (nonatomic) BOOL disableDismissWhenAccept;

- (id)initWithPageSheet:(id)a0;
- (id)initWithInfoModel:(id)a0 pageSheet:(id)a1;
- (BOOL)checkCanAccept;
- (void).cxx_destruct;

@end
