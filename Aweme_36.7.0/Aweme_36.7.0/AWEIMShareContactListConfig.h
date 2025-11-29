@class AWEShareContext, NSString, AWEIMShareContactListUIConfig, AWEIMShareSendDataSource, NSArray, NSDate, AWEIMShareContactListContactsConfig;
@protocol AWEIMSharePanelTrackIDGeneratorProtocol;

@interface AWEIMShareContactListConfig : NSObject

@property (retain, nonatomic) AWEIMShareContactListUIConfig *uiConfig;
@property (retain, nonatomic) AWEIMShareContactListContactsConfig *contactsConfig;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) BOOL enableIncentiveRedPacket;
@property (retain, nonatomic) AWEIMShareSendDataSource *messageDataSource;
@property (copy, nonatomic) NSArray *defaultSelectedIds;
@property (nonatomic) BOOL enableCreateGroup;
@property (retain, nonatomic) NSDate *userStartTime;
@property (retain, nonatomic) id<AWEIMSharePanelTrackIDGeneratorProtocol> trackContext;
@property (copy, nonatomic) id /* block */ shareCompleteHandler;

- (void).cxx_destruct;
- (id)init;

@end
