@class NSArray, WAShareAppMessageContextModel, WAShareAppMessageCommonParamsModel, NSMutableDictionary, WaReportMessageVideoActionItem;
@protocol IWAWebViewPluginDelegate;

@interface WAShareAppMessageInnerTemporaryModel : NSObject

@property (nonatomic) unsigned long long shareCallType;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> resultDelegate;
@property (nonatomic) BOOL bSpecificContact;
@property (nonatomic) BOOL bNoCapture;
@property (retain, nonatomic) NSArray *arrSpecificSendToContacts;
@property (nonatomic) BOOL shouldUseDynamicShare;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) WAShareAppMessageContextModel *shareContextModel;
@property (retain, nonatomic) WaReportMessageVideoActionItem *waMessageVideoReport;
@property (nonatomic) unsigned long long shareImageType;
@property (retain, nonatomic) WAShareAppMessageCommonParamsModel *shareCommonParamsModel;
@property (retain, nonatomic) NSMutableDictionary *scrollOffset;
@property (nonatomic) BOOL forNativeApp;
@property (nonatomic) BOOL waitingShare;
@property (copy, nonatomic) id /* block */ customCallback;

+ (id)model;

- (void).cxx_destruct;

@end
