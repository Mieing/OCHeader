@class NSString, FinderStreamTxtCard, NSData, NSMutableArray, FinderStreamCardActionInfo;

@interface FinderStreamCard : WXPBGeneratedMessage <WCFinderFeedArrayConvert>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long layoutId;
@property (retain, nonatomic) NSString *titleWording;
@property (retain, nonatomic) NSString *linkWording;
@property (nonatomic) unsigned int linkAction;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSMutableArray *objectAction;
@property (retain, nonatomic) NSData *cardBuffer;
@property (nonatomic) unsigned int cardType;
@property (nonatomic) BOOL withoutLink;
@property (nonatomic) unsigned int getRelatedListScene;
@property (nonatomic) BOOL continueAtTheEnd;
@property (retain, nonatomic) NSString *endWording;
@property (nonatomic) unsigned int endAction;
@property (retain, nonatomic) NSString *subTitleWording;
@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) FinderStreamTxtCard *innerStreamEndTxtCard;
@property (retain, nonatomic) FinderStreamCardActionInfo *linkActionInfo;
@property (retain, nonatomic) NSMutableArray *objectActionInfo;
@property (retain, nonatomic) FinderStreamCardActionInfo *endActionInfo;
@property (retain, nonatomic) FinderStreamCardActionInfo *fetchContentActionInfo;
@property (retain, nonatomic) NSString *refreshWording;
@property (retain, nonatomic) FinderStreamCardActionInfo *refreshActionInfo;
@property (retain, nonatomic) FinderStreamCardActionInfo *continueAtTheEndActionInfo;
@property (nonatomic) unsigned int totalObjectCount;

+ (id)feedArrayConvertTidFromObject:(id)a0;
+ (id)feedArrayConvertVMFromItem:(id)a0 scene:(int)a1;
+ (void)initialize;


@end
