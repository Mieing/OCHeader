@class NSString;
@protocol ZZFLEXViewModelDelegate;

@interface ZZFLEXViewModel : NSObject

@property (nonatomic) Class viewClass;
@property (weak, nonatomic) id<ZZFLEXViewModelDelegate> vmDelegate;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) id dataModel;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) long long viewTag;
@property (copy, nonatomic) id /* block */ eventAction;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) id /* block */ selectedAction;
@property (copy, nonatomic) id /* block */ configAction;

- (struct CGSize { double x0; double x1; })visableSizeForHostView:(id)a0 angel:(id)a1 sectionInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)excuteConfigActionForHostView:(id)a0 itemView:(id)a1 sectionCount:(long long)a2 indexPath:(id)a3;
- (void)excuteSelectedActionForHostView:(id)a0;
- (id)initWithViewClass:(Class)a0 vmDelegate:(id)a1;
- (id)initWithViewClass:(Class)a0 vmDelegate:(id)a1 dataModel:(id)a2;
- (id)initWithViewClass:(Class)a0 reuseIdentifier:(id)a1 vmDelegate:(id)a2 dataModel:(id)a3 viewTag:(long long)a4;
- (id)initWithViewClass:(Class)a0 reuseIdentifier:(id)a1 vmDelegate:(id)a2 dataModel:(id)a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewTag:(long long)a5;
- (void)updateViewSize;
- (id)description;
- (void).cxx_destruct;

@end
