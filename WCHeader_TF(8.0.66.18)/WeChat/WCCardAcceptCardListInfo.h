@class NSString, NSMutableArray;

@interface WCCardAcceptCardListInfo : MMObject

@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSMutableArray *cardSeedList;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int statScene;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (retain, nonatomic) NSString *templateMsgId;

- (void).cxx_destruct;

@end
