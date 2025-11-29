@class NSDictionary, NSArray, NSMutableArray;
@protocol IESECRelationInlineVideoSwitchDelegate;

@interface IESECRelationInlineVideoSwitch : UIView {
    double _height;
    double _width;
    NSDictionary *_iconMapper;
    NSArray *_types;
    NSMutableArray *_btns;
}

@property (weak, nonatomic) id<IESECRelationInlineVideoSwitchDelegate> delegate;

- (id)initWithSwitchTypes:(id)a0;
- (void)updateState:(unsigned long long)a0 state:(BOOL)a1;
- (void)clickSwitch:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)line:(double)a0;

@end
