@class UIView, NSString, NSDictionary, DitoTempoComponentView, _TtC8TempoiOS13TempoTemplate, DitoTempoExtension, DitoNode;

@interface DitoTempoComponentViewModel : DitoComponentViewModel

@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *templete;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *bizData;
@property (readonly, nonatomic) NSDictionary *extraData;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *reuseID;
@property (nonatomic) double presetHeight;
@property (nonatomic) BOOL shouldDealWithShow;
@property (nonatomic) BOOL shouldDealWithCompleteShow;
@property (weak, nonatomic) DitoTempoComponentView *cell;
@property (weak, nonatomic) DitoTempoExtension *tempoExtension;
@property (weak, nonatomic) DitoNode *tempoNode;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfComponent;
@property (nonatomic) long long position;
@property (weak, nonatomic) UIView *rootView;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL didPublishEventAfterLoad;

- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewDidCompleteShow;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (id)parseQueryItems:(id)a0;
- (id)extraComponentTrackParams;
- (id)parseTemplete:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
