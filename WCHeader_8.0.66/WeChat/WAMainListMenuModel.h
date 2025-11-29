@class NSString, GetWxaDesktopEntranceResponse_EntranceInfo, UIImage, TipsShowInfo;

@interface WAMainListMenuModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *badge;
@property (retain, nonatomic) GetWxaDesktopEntranceResponse_EntranceInfo *entranceInfo;
@property (retain, nonatomic) TipsShowInfo *tipsInfo;

+ (id)createWithIcon:(id)a0 title:(id)a1;
+ (id)createWithIcon:(id)a0 title:(id)a1 entranceInfo:(id)a2;

- (void).cxx_destruct;

@end
