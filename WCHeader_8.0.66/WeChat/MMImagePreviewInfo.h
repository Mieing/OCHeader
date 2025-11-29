@class UIImage, NSString, NSArray;

@interface MMImagePreviewInfo : NSObject

@property (nonatomic) BOOL preLoading;
@property (copy, nonatomic) id /* block */ preloadCompleteBlock;
@property (retain, nonatomic) UIImage *processImage;
@property (retain, nonatomic) NSString *processErrMsg;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) NSArray *supportedItemTypes;
@property (nonatomic) BOOL onlyShowSaveItemInProcess;
@property (nonatomic) BOOL replaceEditWithCropItemInProcess;
@property (retain, nonatomic) NSString *originTitle;
@property (retain, nonatomic) NSString *processTitle;
@property (retain, nonatomic) NSString *gameAppId;
@property (copy, nonatomic) id /* block */ processHandler;
@property (copy, nonatomic) id /* block */ onWillForwardMsg;
@property (copy, nonatomic) id /* block */ onDidForwardMsg;
@property (copy, nonatomic) id /* block */ onWillSearch;

- (void)dealloc;
- (void)preloadIfNeed;
- (void)getProcessImage:(id /* block */)a0;
- (void)_safeCallProcessHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
