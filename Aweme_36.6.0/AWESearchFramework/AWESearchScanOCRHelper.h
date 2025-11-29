@class AWESearchScanDataContext, NSString;

@interface AWESearchScanOCRHelper : NSObject <AWESearchScanOCRHelperProtocol>

@property (weak, nonatomic) AWESearchScanDataContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableScanOCR;
+ (void)trackSelectTextBubbleShow:(id)a0;
+ (void)trackSelectTextBubbleClick:(id)a0;
+ (void)trackCopyTextBubbleShow:(id)a0;
+ (void)trackCopyTextBubbleClick:(id)a0;
+ (void)trackArrowDrag:(id)a0;
+ (double)scanOCRAreaThreshold;
+ (BOOL)debug_shouldShowIndexAndToast;
+ (BOOL)getVisionImageUserTextQueryIsOCR:(id)a0;
+ (id)getVisionImageUserTextQuerySearchSource:(id)a0;
+ (void)setVisionImageUserTextQuery:(id)a0 isOCR:(BOOL)a1;
+ (void)setVisionImageUserTextQuery:(id)a0 searchSource:(id)a1;
+ (BOOL)useVisionFramework;
+ (id)OCRArrowUpImageView;
+ (id)OCRArrowDownImageView;
+ (BOOL)checkEnableScanOCR;
+ (BOOL)isCoreMLSupported;
+ (id)scanOCRBlackList;
+ (id)dictionaryWithSearchTrackParams:(id)a0 keys:(id)a1;
+ (id)CopyTextBubbleBTM;
+ (id)selectTextBubbleBTM;
+ (id)arrowDragBTM;
+ (void)addRequestParameter:(id)a0 withKey:(id)a1 value:(id)a2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
