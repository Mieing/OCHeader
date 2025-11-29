@interface _ZZControlChainModel : _ZZViewChainModel

@property (readonly, copy, nonatomic) id /* block */ enabled;
@property (readonly, copy, nonatomic) id /* block */ enabled_O;
@property (readonly, copy, nonatomic) id /* block */ selected;
@property (readonly, copy, nonatomic) id /* block */ selected_O;
@property (readonly, copy, nonatomic) id /* block */ highlighted;
@property (readonly, copy, nonatomic) id /* block */ highlighted_O;
@property (readonly, copy, nonatomic) id /* block */ eventBlock;
@property (readonly, copy, nonatomic) id /* block */ eventTouchDown;
@property (readonly, copy, nonatomic) id /* block */ eventTouchDownRepeat;
@property (readonly, copy, nonatomic) id /* block */ eventTouchUpInside;
@property (readonly, copy, nonatomic) id /* block */ eventTouchUpOutside;
@property (readonly, copy, nonatomic) id /* block */ eventTouchCancel;
@property (readonly, copy, nonatomic) id /* block */ eventValueChanged;
@property (readonly, copy, nonatomic) id /* block */ eventEditingDidBegin;
@property (readonly, copy, nonatomic) id /* block */ eventEditingChanged;
@property (readonly, copy, nonatomic) id /* block */ eventEditingDidEnd;
@property (readonly, copy, nonatomic) id /* block */ eventEditingDidEndEditingDidEndOnExit;
@property (readonly, copy, nonatomic) id /* block */ contentVerticalAlignment;
@property (readonly, copy, nonatomic) id /* block */ contentHorizontalAlignment;

+ (Class)viewClass;

- (id /* block */)contentVerticalAlignment_O;
- (id /* block */)contentHorizontalAlignment_O;

@end
