@class MMPageSheetAdapter, MMLiteAppPageSheetWrapViewController, MMLiteAppViewController, UIPanGestureRecognizer;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface MMLiteAppPageSheetHalfScreenStatus : NSObject

@property (nonatomic) BOOL show;
@property (retain, nonatomic) MMPageSheetAdapter *adapter;
@property (retain, nonatomic) MMLiteAppPageSheetWrapViewController *pageSheetWrapVC;
@property (retain, nonatomic) MMLiteAppViewController *liteAppVC;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> statusChangeListener;
@property (retain, nonatomic) UIPanGestureRecognizer *flutterPanGestureRecognizer;
@property (nonatomic) BOOL didPushSelfInPageSheet;
@property (copy, nonatomic) id /* block */ halfScreenClosed;
@property (nonatomic) BOOL halfOrFullAnimation;
@property (nonatomic) unsigned int fromLiteAppUuid;
@property (nonatomic) unsigned long long fromLitePageId;

- (void).cxx_destruct;

@end
