@class BDSCButtonUIModel;

@interface BDSCClarityViewUIModel : NSObject

@property (retain, nonatomic) BDSCButtonUIModel *clarityViewModel;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)textColor;
- (id)selectionColor;

@end
