@class UIColor, NSString, CContact, BTLiveBarItemView, BrandFinderLiveInfo;

@interface BTLiveBarItemViewModel : NSObject <IContactMgrExt>

@property (retain, nonatomic) UIColor *cachedMainColor;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *headImgUrl;
@property (readonly, nonatomic) NSString *nickName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *mainColor;
@property (readonly, nonatomic) NSString *liveCoverUrl;
@property (weak, nonatomic) BTLiveBarItemView *itemView;
@property (nonatomic) BOOL hasClick;
@property (retain, nonatomic) CContact *contact;
@property (copy, nonatomic) BrandFinderLiveInfo *liveInfo;
@property (nonatomic) BOOL isDefaultExpand;
@property (nonatomic) BOOL isExposedInLiveBar;

+ (id)itemViewClassName;

- (id)init;
- (void)saveMainColor:(id)a0;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
