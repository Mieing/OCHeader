@class NSString, NSMutableArray, TagCtrlInfo;

@interface WCTopicOpenParams : NSObject

@property (retain, nonatomic) NSMutableArray *kvList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) long long shareScene;
@property (retain, nonatomic) NSString *shareSceneId;
@property (nonatomic) long long shareCreateTime;
@property (nonatomic) long long enterSource;
@property (copy, nonatomic) NSString *talkerUsername;
@property (copy, nonatomic) NSString *senderUsername;
@property (copy, nonatomic) id /* block */ customWeAppItemBlock;
@property (copy, nonatomic) id /* block */ weAppDidOpenBlock;
@property (copy, nonatomic) id /* block */ h5DidOpenBlock;
@property (nonatomic) BOOL openWeAppWithoutAlert;
@property (retain, nonatomic) TagCtrlInfo *tagCtrlInfo;
@property (copy, nonatomic) id /* block */ webViewDidOpenBlock;
@property (nonatomic) int finderEnterScene;
@property (nonatomic) int finderCardType;
@property (nonatomic) int finderReportScene;
@property (nonatomic) int finderEnterType;
@property (copy, nonatomic) id /* block */ finderDidOpenBlock;
@property (nonatomic) int bizAddContactScene;
@property (copy, nonatomic) id /* block */ bizDidOpenBlock;

- (void).cxx_destruct;

@end
