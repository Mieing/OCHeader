@class NSString, AWEIMGreetCardInfo, AWEAwemeModel, NSError, NSObject;
@protocol OS_dispatch_group;

@interface AWEFeedShareReflowCardAndVideoProcess : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *videoAuthorUID;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) BOOL forbidCardInsert;
@property (nonatomic) BOOL existingCardInPlayList;
@property (retain, nonatomic) AWEAwemeModel *cardModel;
@property (retain, nonatomic) AWEAwemeModel *videoModel;
@property (retain, nonatomic) AWEIMGreetCardInfo *cardInfo;
@property (retain, nonatomic) NSError *videoError;
@property (retain, nonatomic) NSString *disableReason;

- (void).cxx_destruct;

@end
