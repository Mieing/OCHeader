@class NSDictionary;

@interface MMWebSameLayerViewIdentity : NSObject {
    NSDictionary *m_dict;
}

- (id)initWithDict:(id)a0;
- (BOOL)checkData;
- (unsigned int)viewId;
- (BOOL)isSameView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrame;
- (double)maxDiff;
- (id)description;
- (void).cxx_destruct;

@end
