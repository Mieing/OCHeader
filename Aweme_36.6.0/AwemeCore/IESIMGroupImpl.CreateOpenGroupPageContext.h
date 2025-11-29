@class NSString, NSDictionary, AWEIMCodeGenPublicGroupCreateInfoModel, NSObject;

@interface IESIMGroupImpl.CreateOpenGroupPageContext : AWEIMComponentContext <IESIMCreateOpenGroupPageContextProtocol> {
    void /* function */ enterFrom;
    void /* function */ enterMethod;
    void /* function */ source;
    void /* function */ enterBlock;
    void /* function */ sendPublicNoticeCard;
    void /* unknown type, empty encoding */ routerParams;
    void /* function */ bizScene;
    void /* function */ mobExt;
    void /* function */ bizExt;
    void /* function */ scene;
    void /* function */ dismissBlock;
}

@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *enterMethod;
@property (nonatomic, copy) NSString *source;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSObject *prefetchID;
@property (nonatomic, copy) id /* block */ enterBlock;
@property (nonatomic, copy) NSString *sendPublicNoticeCard;
@property (nonatomic) long long createSource;
@property (nonatomic) long long groupType;
@property (nonatomic) BOOL shouldDismissWhenCreationHasDone;
@property (nonatomic) long long actionCheckSource;
@property (nonatomic) BOOL shouldBeWrappedInContainerVCWhenEnableBigFontStyle;
@property (nonatomic) BOOL needFloatMode;
@property (nonatomic) double panelHeightBias;
@property (nonatomic) long long bizLine;
@property (nonatomic, copy) NSString *bizScene;
@property (nonatomic) long long invokeChannel;
@property (nonatomic, copy) NSDictionary *mobExt;
@property (nonatomic) BOOL needEnterChatOnCreate;
@property (nonatomic) BOOL isUsePushMode;
@property (nonatomic, copy) NSDictionary *bizExt;
@property (nonatomic, retain) AWEIMCodeGenPublicGroupCreateInfoModel *ruleInfo;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) id /* block */ dismissBlock;

- (void).cxx_destruct;
- (id)init;

@end
