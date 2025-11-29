@class NSArray;

@interface AWEEcomSearchBarStyleConfig : NSObject

@property (retain, nonatomic) NSArray *configArrary;

- (struct AWESearchEditViewStyleConfig { struct AWESearchStyleConfig { struct FrameStyle { id x0; double x1; } x0; struct ActionStyle { id x0; id x1; BOOL x2; } x1; struct ScanStyle { id x0; BOOL x1; } x2; struct ActionExtra { id x0; id x1; id x2; } x3; } x0; struct AWESearchStyleConfig { struct FrameStyle { id x0; double x1; } x0; struct ActionStyle { id x0; id x1; BOOL x2; } x1; struct ScanStyle { id x0; BOOL x1; } x2; struct ActionExtra { id x0; id x1; id x2; } x3; } x1; struct AWESearchStyleConfig { struct FrameStyle { id x0; double x1; } x0; struct ActionStyle { id x0; id x1; BOOL x2; } x1; struct ScanStyle { id x0; BOOL x1; } x2; struct ActionExtra { id x0; id x1; id x2; } x3; } x2; })convertDictToConfigs:(id)a0;
- (struct AWESearchStyleConfig { struct FrameStyle { id x0; double x1; } x0; struct ActionStyle { id x0; id x1; BOOL x2; } x1; struct ScanStyle { id x0; BOOL x1; } x2; struct ActionExtra { id x0; id x1; id x2; } x3; })convertDictToStyleConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
