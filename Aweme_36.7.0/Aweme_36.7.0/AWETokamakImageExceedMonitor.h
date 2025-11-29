@class NSArray;

@interface AWETokamakImageExceedMonitor : AWETokamakImageMonitor {
    double _exceedThreshold;
    NSArray *_exceedWhiteList;
}

- (struct CGSize { double x0; double x1; })_targetSize:(id)a0;
- (id)_generateShortViewPath:(id)a0;
- (BOOL)shouldReportImageSizeExceed:(struct CGSize { double x0; double x1; })a0 targeViewSize:(struct CGSize { double x0; double x1; })a1 viewPath:(id)a2;
- (id)_shortViewPathForView:(id)a0;
- (void)receiveImageModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
