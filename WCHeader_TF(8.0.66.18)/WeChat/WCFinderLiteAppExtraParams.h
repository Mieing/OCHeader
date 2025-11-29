@class NSDictionary, NSNumber;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface WCFinderLiteAppExtraParams : NSObject

@property (copy, nonatomic) id /* block */ onDispatch;
@property (copy, nonatomic) id /* block */ onHalfCloseAction;
@property (retain, nonatomic) NSDictionary *liteAppStoreDataDict;
@property (copy, nonatomic) id /* block */ openResultBlock;
@property (nonatomic) BOOL enableDragToFullScreenInHalfScreen;
@property (nonatomic) BOOL m_bEnableExpandToStatusBarTop;
@property (retain, nonatomic) NSNumber *pushDelayTime;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> halfScreenStatusChangeListener;

- (void).cxx_destruct;

@end
