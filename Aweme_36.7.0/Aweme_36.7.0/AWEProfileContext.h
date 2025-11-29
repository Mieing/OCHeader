@class AWEProfileServiceCenter, AWEProfileEventCenter, NSString;

@interface AWEProfileContext : AWEPageContext <AWEProfileContextCommonProtocol>

@property (retain, nonatomic) AWEProfileServiceCenter *serviceCenter;
@property (retain, nonatomic) AWEProfileEventCenter *eventCenter;
@property (copy, nonatomic) id /* block */ findContainerObjectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (id)enterMethod;
- (id)commonParams;
- (id)enterAwemeModel;
- (id)routerParam;
- (BOOL)isFromHomePage;
- (id)profileSessionID;
- (id)eventCommonParamsHandler;
- (id)enterAwemeID;
- (id)enterUserModel;
- (id)profileSessionParamsManager;
- (id)secUserID;
- (id)userID;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCurrentUser;
- (id)enterType;

@end
