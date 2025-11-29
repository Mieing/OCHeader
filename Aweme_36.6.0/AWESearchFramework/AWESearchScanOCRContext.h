@class NSArray, NSString, UIView;
@protocol AWESearchScanOCRContainerProtocol;

@interface AWESearchScanOCRContext : NSObject <AWESearchScanOCRContextProtocol>

@property (weak, nonatomic) UIView<AWESearchScanOCRContainerProtocol> *container;
@property (copy, nonatomic) NSArray *ocrInfoList;
@property (nonatomic) BOOL showCopyView;
@property (nonatomic) BOOL showSelectView;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long endIndex;
@property (nonatomic) unsigned long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromSearchSource:(unsigned long long)a0;

- (id)copyCacheProperties;
- (void).cxx_destruct;

@end
