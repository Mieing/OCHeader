@class NSString;

@interface IESIMFansGroupCommodityEntryServiceImpl : NSObject <IESIMFansGroupCommodityEntryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (BOOL)enableFansCommodityWithCon:(id)a0;
- (BOOL)tryShowCommodityGuideBubbleWithCon:(id)a0 anchorView:(id)a1;

@end
