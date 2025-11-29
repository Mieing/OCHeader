@class NSString, IESECWinLivingLatestInfoModel;

@interface IESECWinLivingHotLatestInfoObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECWinLivingLatestInfoModel *model;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *webcastInfo;
@property (readonly, copy, nonatomic) NSString *audienceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
