@class NSString, CameraScannerViewWrapper, GetUrlInfoReqSession, OpenIMContactSearchContext, NSNumber;

@interface ScanQRCodeLogicParams : NSObject

@property (nonatomic) int codeType;
@property (nonatomic) unsigned int fromScene;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) BOOL bNeedCameraScan;
@property (nonatomic) BOOL bShowMyQRCodeBtn;
@property (retain, nonatomic) CameraScannerViewWrapper *wrapper;
@property (nonatomic) unsigned long long longPressScanScene;
@property (nonatomic) BOOL bEnableCombine;
@property (nonatomic) BOOL bEnableOperatorReporter;
@property (nonatomic) long long getA8KeyScene;
@property (retain, nonatomic) NSString *msgChatName;
@property (retain, nonatomic) NSString *msgUserName;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSNumber *contentType;
@property (retain, nonatomic) NSNumber *msgInnerType;
@property (retain, nonatomic) NSString *wxaPathWithQuery;
@property (retain, nonatomic) NSString *wxaSessionId;
@property (nonatomic) BOOL wxaIsFromWeAppInnerWebView;
@property (retain, nonatomic) GetUrlInfoReqSession *getUrlInfoSessionParam;
@property (retain, nonatomic) OpenIMContactSearchContext *openIMContext;

- (id)initWithCodeType:(int)a0 fromScene:(unsigned int)a1;
- (id)initWithCodeType:(int)a0 fromScene:(unsigned int)a1 enterScene:(unsigned long long)a2 bNeedCameraScan:(BOOL)a3 bShowMyQRCodeBtn:(BOOL)a4 wrapper:(id)a5;
- (void).cxx_destruct;

@end
