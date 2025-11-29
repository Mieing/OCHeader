@class NSArray, AWESearchHotTipComponentModel, AWESearchBottomNormalBarComponentModel;

@interface AWESearchPlayerInteractorBottomContainerComponentModel : AWESearchComponentBasicModel

@property (retain, nonatomic) NSArray *type;
@property (nonatomic) unsigned long long componentType;
@property (retain, nonatomic) AWESearchBottomNormalBarComponentModel *normalBarModel;
@property (retain, nonatomic) AWESearchHotTipComponentModel *hotTipModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
