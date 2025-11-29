@class NSArray;

@interface WCOrderKeyValueView : MMUIView

@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id target;

- (void)dealloc;
- (id)init;
- (void)setupViews;
- (id)lineView;
- (id)nameLabel;
- (id)detailLabel;
- (id)copyableTextView;
- (void).cxx_destruct;

@end
