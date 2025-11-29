@class WCDataItem, CContact, NSString, UIImage;
@protocol TLProfileMediaViewProvider;

@interface TLProfileModel : NSObject

@property (retain, nonatomic) id<TLProfileMediaViewProvider> thirdPartyHandler;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) CContact *contact;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) NSString *finderObjectID;
@property (readonly, nonatomic) NSString *finderNonceID;
@property (copy, nonatomic) UIImage *normalImage;
@property (nonatomic) double snsCoverOffset;
@property (readonly, nonatomic) BOOL hidesBlurForShortHeightMedias;

- (id)initWithScene:(long long)a0 contact:(id)a1;
- (void)reloadData;
- (void)requestDataIfNeeded;
- (id)mediaView;
- (id)mediaCoverView;
- (id)headImageViewFor3rdParty;
- (id)descriptionFor3rdParty;
- (id)titleFor3rdParty;
- (BOOL)isInvalid;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
