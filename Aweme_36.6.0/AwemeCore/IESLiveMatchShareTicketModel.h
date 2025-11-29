@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface IESLiveMatchShareTicketModel : NSObject

@property (retain, nonatomic) NSArray *imageURLList;
@property (retain, nonatomic) NSArray *raceLogoURLList;
@property (nonatomic) BOOL isUseRaceTemplate;
@property (retain, nonatomic) NSString *shareScene;
@property (retain, nonatomic) NSString *ticketNum;
@property (retain, nonatomic) NSDictionary *shareExtraInfo;
@property (retain, nonatomic) NSMutableDictionary *reposterExtraInfo;
@property (nonatomic) BOOL showOutsitePushAuthPanel;
@property (retain, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;

@end
