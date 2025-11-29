@class HTSLiveParentProductSimpleData, NSMutableArray;

@interface HTSLiveCombined : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *bindSubTicketListArray;
@property (readonly, nonatomic) unsigned long long bindSubTicketListArray_Count;
@property (retain, nonatomic) HTSLiveParentProductSimpleData *parentTicketPanelData;
@property (nonatomic) BOOL hasParentTicketPanelData;
@property (nonatomic) BOOL bindSubTicketListHasMore;
@property (nonatomic) int bindSubTicketTotal;
@property (nonatomic) BOOL combinationUpdated;

+ (id)descriptor;

@end
