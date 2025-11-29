@class NSString, NSDictionary, NSArray, NSTimer;

@interface IESTFOuterTestInstructionViewModel : NSObject

@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *traceEvent;
@property (copy, nonatomic) NSDictionary *traceParams;
@property (copy, nonatomic) NSArray *instructionList;
@property (retain, nonatomic) NSTimer *observeTimer;
@property (copy, nonatomic) id /* block */ requireShowToastBlock;
@property (copy, nonatomic) id /* block */ requireListRefreshBlock;
@property (copy, nonatomic) id /* block */ showAppStoreBlock;
@property (copy, nonatomic) id /* block */ hideAppStoreBlock;
@property (copy, nonatomic) id /* block */ requireOpenURLBlock;

+ (id)contentParagraphStyle;
+ (BOOL)isTestFlightAppInstalled;
+ (id)titleNormalTextAttributes;
+ (id)titleHighlightedTextAttributes;
+ (id)contentNormalTextAttributes;
+ (id)contentHighlightedTextAttributes;

- (void)refreshList;
- (void)didActive;
- (id)initWithDownloadURL:(id)a0 traceEvent:(id)a1 traceParams:(id)a2;
- (void)onClickInstallAppAtIndex:(unsigned long long)a0;
- (id)instructionTitleAtIndex:(unsigned long long)a0;
- (id)instructionContentAtIndex:(unsigned long long)a0;
- (id)instructionAppDescAtIndex:(unsigned long long)a0;
- (id)instructionAppIconImageURLStrAtIndex:(unsigned long long)a0;
- (id)instructionAppIconImageAtIndex:(unsigned long long)a0;
- (BOOL)instructionIsFinishedAtIndex:(unsigned long long)a0;
- (BOOL)instructionIsEnabledAtIndex:(unsigned long long)a0;
- (void)observeTestFlightAppInstallStatus;
- (void)trackHotsoonAutoClick;
- (void)trackTestFlightClick;
- (void)trackHotsoonClick;
- (void)trackTestFlightInstalledAfterClick;
- (void)reloadData;
- (void).cxx_destruct;
- (unsigned long long)numberOfCells;
- (void)dealloc;

@end
