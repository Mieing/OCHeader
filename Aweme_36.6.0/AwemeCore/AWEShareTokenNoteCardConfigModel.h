@class NSString, NSArray, NSMutableDictionary, UIImage, AWEURLModel;

@interface AWEShareTokenNoteCardConfigModel : NSObject

@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) AWEURLModel *titleIconURL;
@property (nonatomic) BOOL shouldShowShareAuthor;
@property (copy, nonatomic) NSString *sharerName;
@property (retain, nonatomic) NSArray *sharerImageList;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL isWebViewShare;
@property (retain, nonatomic) NSMutableDictionary *reportCommitDictionary;
@property (retain, nonatomic) NSMutableDictionary *reportEventDictionary;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) unsigned long long liveStage;
@property (nonatomic) BOOL isInviteToChannel;
@property (nonatomic) BOOL actionDisabled;
@property (copy, nonatomic) id /* block */ turnToCardBlock;
@property (copy, nonatomic) id /* block */ turnToSharerBlock;
@property (copy, nonatomic) id /* block */ reshowCardViewBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapReportButtonBlock;
@property (retain, nonatomic) NSMutableDictionary *ecommerceInfoDictionary;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;

- (void).cxx_destruct;

@end
