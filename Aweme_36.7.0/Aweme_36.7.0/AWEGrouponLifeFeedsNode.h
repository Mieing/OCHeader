@class NSError, NSString, NSArray, AWEGrouponLifeFeedsNodeRuntimeState, AWEGrouponLifeFeedsBaseComponentVM, NSDictionary, AWEGrouponLifeFeedsStyle, AWEGrouponLifeFeedsNodeTemplate;

@interface AWEGrouponLifeFeedsNode : NSObject

@property (readonly, nonatomic) NSString *superNodeTag;
@property (readonly, nonatomic) NSArray *subNodeTagList;
@property (readonly, nonatomic) NSArray *componentTagList;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) AWEGrouponLifeFeedsNodeRuntimeState *runtimeState;
@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentVM *componentViewModel;
@property (nonatomic) struct CGPoint { double x0; double x1; } origin;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInComponent;
@property (readonly, nonatomic) double subNodeWidth;
@property (readonly, nonatomic) BOOL isBlock;
@property (nonatomic) BOOL isFullRow;
@property (nonatomic) BOOL isLife;
@property (nonatomic) BOOL isRight;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long indexOfColumn;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) AWEGrouponLifeFeedsStyle *style;
@property (retain, nonatomic) AWEGrouponLifeFeedsNodeTemplate *templet;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *transTrackParams;
@property (copy, nonatomic) NSDictionary *sourceData;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEGrouponLifeFeedsNodeRuntimeState *runtimeState;
@property (readonly, nonatomic) NSArray *eventList;

- (id)errorWithCode:(long long)a0 msg:(id)a1;
- (void)p_setSubNodeTagList:(id)a0;
- (id)initWithTag:(id)a0 sourceData:(id)a1;
- (void)p_setSuperNodeTag:(id)a0;
- (id)appendSubBlockNodeSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })nextItemOrigin;
- (void)p_setData:(id)a0;
- (void)parseSourceData:(id)a0;
- (unsigned long long)typeFromSourceData:(id)a0;
- (unsigned long long)updateTypeFromSourceData:(id)a0;
- (void)setSuperNodeTag:(id)a0;
- (void)setSubNodeTagList:(id)a0;
- (void)p_setComponentTagList:(id)a0;
- (void).cxx_destruct;
- (void)endLayout;
- (void)resetLayout;

@end
