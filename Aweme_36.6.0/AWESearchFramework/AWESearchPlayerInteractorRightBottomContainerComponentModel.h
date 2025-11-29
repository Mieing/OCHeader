@class NSArray, AWESearchPlayStatusBarComponentModel;

@interface AWESearchPlayerInteractorRightBottomContainerComponentModel : AWESearchComponentBasicModel

@property (retain, nonatomic) NSArray *type;
@property (nonatomic) unsigned long long componentType;
@property (retain, nonatomic) AWESearchPlayStatusBarComponentModel *playStatusModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
