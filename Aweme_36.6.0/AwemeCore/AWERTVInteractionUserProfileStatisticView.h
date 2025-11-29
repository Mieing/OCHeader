@class NSString, AWERTVInteractionUserProfileStatisticViewModel;

@interface AWERTVInteractionUserProfileStatisticView : UIView

@property (copy, nonatomic) NSString *praise;
@property (copy, nonatomic) NSString *fans;
@property (copy, nonatomic) NSString *following;
@property (retain, nonatomic) AWERTVInteractionUserProfileStatisticViewModel *model;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__setupViews;
- (id)__createViewWithPrefix:(id)a0 text:(id)a1;
- (void).cxx_destruct;

@end
