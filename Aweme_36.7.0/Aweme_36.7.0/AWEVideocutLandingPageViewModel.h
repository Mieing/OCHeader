@class NSArray, NSString, AWEAweMVTemplateModel;

@interface AWEVideocutLandingPageViewModel : NSObject

@property (nonatomic) long long fetchState;
@property (readonly, nonatomic) NSArray *nonTemplateIDList;
@property (nonatomic) BOOL isDefaultID;
@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSString *topicID;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (readonly, nonatomic) NSString *usageAmountString;
@property (readonly, nonatomic) BOOL isVideocutInstalled;
@property (retain, nonatomic) NSString *awemeID;

- (void)trackActionButtonClickWithType:(id)a0;
- (void)trackVideocutDetailPageShow;
- (void)openInJianying;
- (void)trackDownloadEvent;
- (void)transferToUserProfile;
- (void)fetchTemplateDetail;
- (void)trackVideoPlayAction:(id)a0;
- (BOOL)isValidTemplateID:(id)a0;
- (void)fetchTemplateDetailWithTemplateID:(id)a0;
- (void)trackEnterUserProfile;
- (void).cxx_destruct;
- (id)actionButtonTitle;

@end
