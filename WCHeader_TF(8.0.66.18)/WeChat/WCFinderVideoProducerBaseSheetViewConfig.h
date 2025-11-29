@class NSString;

@interface WCFinderVideoProducerBaseSheetViewConfig : NSObject

@property (nonatomic) BOOL isTopViewEnabled;
@property (nonatomic) double topViewHeight;
@property (retain, nonatomic) NSString *topViewTitle;
@property (nonatomic) BOOL isBottomViewEnabled;
@property (nonatomic) double bottomViewHeight;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
