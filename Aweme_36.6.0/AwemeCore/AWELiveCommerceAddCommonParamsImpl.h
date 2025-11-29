@class NSString;

@interface AWELiveCommerceAddCommonParamsImpl : NSObject <IESLiveCommerceAddCommonParamsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commerceAddCommonParamsIfNeededWithRoomID:(id)a0 itemExplicitInfo:(id)a1 async:(BOOL)a2;

@end
