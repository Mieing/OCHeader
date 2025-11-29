@class GetAnchorSeasonPanelResponse_ResponseData;

@interface GetAnchorSeasonPanelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAnchorSeasonPanelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
