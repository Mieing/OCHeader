@class NSString, NSMutableDictionary, NSMutableSet, UIView, NSMutableArray;

@interface BSTViewModel : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *btmInfo;
@property (copy, nonatomic) NSString *exposureEventID;
@property (copy, nonatomic) NSString *clickEventID;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) long long viewStatus;
@property (retain, nonatomic) NSMutableSet *trackRules;
@property (retain, nonatomic) NSMutableDictionary *reporterMap;
@property (retain, nonatomic) NSMutableArray *bstTrackModels;
@property (retain, nonatomic) NSMutableDictionary *trackRuleMap;
@property (retain, nonatomic) NSMutableDictionary *bcmStorage;
@property (retain, nonatomic) NSMutableArray *bstExposureHandlers;
@property (retain, nonatomic) NSMutableArray *bstClickHandlers;
@property (nonatomic) BOOL forbiddenBubble;
@property (nonatomic) BOOL enableSendingClick;
@property (nonatomic) long long index;

- (void)resetReportStatus;
- (void)viewDisplayEnd;
- (BOOL)isBindedTrackModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
