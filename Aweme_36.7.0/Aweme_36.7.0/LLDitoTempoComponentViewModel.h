@class UIView, NSString, NSDictionary, LLDitoTempoComponentView, _TtC8TempoiOS13TempoTemplate, LLDitoNode, LLDitoTempoExtension;

@interface LLDitoTempoComponentViewModel : LLDitoComponentViewModel

@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *templete;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *bizData;
@property (readonly, nonatomic) NSDictionary *extraData;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *reuseID;
@property (nonatomic) BOOL shouldDealWithShow;
@property (nonatomic) BOOL shouldDealWithCompleteShow;
@property (weak, nonatomic) LLDitoTempoComponentView *cell;
@property (weak, nonatomic) LLDitoTempoExtension *tempoExtension;
@property (weak, nonatomic) LLDitoNode *tempoNode;
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
