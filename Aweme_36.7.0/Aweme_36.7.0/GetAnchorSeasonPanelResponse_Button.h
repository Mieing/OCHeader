@class NSString, GetAnchorSeasonPanelResponse_Button_Tip;

@interface GetAnchorSeasonPanelResponse_Button : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_Button_Tip *tip;
@property (nonatomic) BOOL hasTip;

+ (id)descriptor;

@end
