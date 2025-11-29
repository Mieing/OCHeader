@class CMessageWrap, NSString, UIImage, CircleToSearchScanItem, ScanGoodsResult, NSMutableDictionary, NSMutableArray, WCMediaItem;

@interface CircleToSearchEntity : NSObject

@property (readonly, nonatomic) NSMutableDictionary *context;
@property (nonatomic) unsigned long long debugBeginTime;
@property (readonly, nonatomic) NSMutableArray *debugMessages;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long entrance;
@property (nonatomic) unsigned long long overridedSearchScene;
@property (retain, nonatomic) NSString *overridedParentSearchId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) unsigned long long searchScene;
@property (readonly, nonatomic) NSString *searchExtParams;
@property (readonly, nonatomic) NSString *searchThirdExtParams;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *thirdExtInfo;
@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSString *referrerFeedId;
@property (retain, nonatomic) NSString *finderUserName;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrameInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expectedFrameInWindow;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) NSString *imageUrl;
@property (readonly, nonatomic) BOOL alignWidthToWindow;
@property (readonly, nonatomic) BOOL transitionFrame;
@property (copy, nonatomic) id /* block */ presentBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) BOOL skipImageUploading;
@property (retain, nonatomic) ScanGoodsResult *scanObjectResult;
@property (retain, nonatomic) CircleToSearchScanItem *scanBarcodeResult;
@property (retain, nonatomic) NSString *clickReportInfoFor33399;
@property (readonly, nonatomic) NSString *debugMessage;

+ (unsigned long long)getSearchSceneFromScene:(unsigned long long)a0;
+ (void)reportActionType:(unsigned long long)a0 withScene:(unsigned long long)a1 andEntrance:(unsigned long long)a2 andSessionId:(id)a3 andActionValue:(id)a4;
+ (void)reportActionType:(unsigned long long)a0 withSearchScene:(unsigned long long)a1 andEntrance:(unsigned long long)a2 andSessionId:(id)a3 andActionValue:(id)a4;

- (id)initWithImage:(id)a0 andScene:(unsigned long long)a1 andEntrance:(unsigned long long)a2;
- (unsigned long long)searchParentType;
- (id)searchParentSearchId;
- (void)report:(unsigned long long)a0;
- (void)report:(unsigned long long)a0 withActionValue:(id)a1;
- (void)debug:(id)a0;
- (void).cxx_destruct;

@end
