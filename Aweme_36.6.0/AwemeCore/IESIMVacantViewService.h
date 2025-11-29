@class NSString;

@interface IESIMVacantViewService : HTSService <IESIMVacantViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createVacantView;
- (id)vacantViewWithType:(long long)a0 image:(id)a1 title:(id)a2 detail:(id)a3;
- (id)vacantViewWithType:(long long)a0 image:(id)a1 title:(id)a2 detail:(id)a3 enlargeType:(unsigned long long)a4;

@end
