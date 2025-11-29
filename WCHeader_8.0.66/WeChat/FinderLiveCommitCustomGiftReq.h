@class BaseRequest, NSString, AnchorSwitchSkinInfo_SelectedValue, FinderBaseRequest;

@interface FinderLiveCommitCustomGiftReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) AnchorSwitchSkinInfo_SelectedValue *newValue;

+ (void)initialize;

@end
