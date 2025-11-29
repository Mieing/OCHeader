@class NSString, HTSLiveImage;

@interface GetAnchorSeasonPanelResponse_PeakCardInfo_PageInfo_Item : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *expireDesc;

+ (id)descriptor;

@end
