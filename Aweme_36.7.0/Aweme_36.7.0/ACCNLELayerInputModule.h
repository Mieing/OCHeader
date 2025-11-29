@class ACCNLETextLayerEditContainer, NSString, UIView;

@interface ACCNLELayerInputModule : ACCNLELayerModule <ACCNLETextLayerEditContainerDelegate>

@property (retain, nonatomic) UIView *textEditMaskView;
@property (retain, nonatomic) ACCNLETextLayerEditContainer *textEditContainer;
@property (readonly, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ onFinishEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
