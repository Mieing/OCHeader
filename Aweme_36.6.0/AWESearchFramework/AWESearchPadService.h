@class NSString;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchPadService : AWESearchVerticalContainerService <AWESearchPadServiceProtocol>

@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSearchPadSplitWindowAdapter;
+ (double)getPadSingleColumnContainerWidth;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)enableMutipleColumnStyle;
- (BOOL)enablePadSearchMultipleStyle;
- (BOOL)isContainerSizeChanged:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)handleVerticalAndHoriztionalFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)clearOnlyNativeCardFrame:(BOOL)a0;
- (void)clearNativeCardFrame;
- (void)handleCachalotLayout;
- (id)fetchCustomLayout;
- (id)fetchCurrentLeafModels;
- (BOOL)isGeneralSearch;
- (void)updateCellSubViewsFrame:(id)a0 withSearchModel:(id)a1;
- (void)updateCellController:(unsigned long long)a0 andModel:(id)a1;
- (id)fetchSearchType;
- (void)handleParamsStatus;
- (long long)columnNum;
- (long long)currentColumn;

@end
