@class GetAnchorSeasonPanelResponse_PeakCardInfo_PageInfo, NSMutableArray;

@interface GetAnchorSeasonPanelResponse_PeakCardInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *descArray;
@property (readonly, nonatomic) unsigned long long descArray_Count;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_PeakCardInfo_PageInfo *pageInfo;
@property (nonatomic) BOOL hasPageInfo;

+ (id)descriptor;

@end
