@class NSString, NSMutableArray;

@interface GetAnchorSeasonPanelResponse_PeakCardInfo_PageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;

+ (id)descriptor;

@end
