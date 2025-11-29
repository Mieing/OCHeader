@class NSString, NSArray, QMapContext, QMediator, QUniversalMapCounter, QStatisticer;

@interface QStyleManager : NSObject

@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSString *configDirectoryPath;
@property (copy, nonatomic) NSString *stylePlistPath;
@property (retain, nonatomic) NSArray *styleList;
@property (nonatomic) long long styleOrder;
@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) QUniversalMapCounter *universalCounter;
@property (weak, nonatomic) QStatisticer *styleStatisticer;
@property (readonly, nonatomic, getter=isNightMapStyle) BOOL nightMapStyle;

- (id)getStyleIDString;
- (long long)getCustomStyleOrder;
- (void)setStyleIndex:(long long)a0 withModifyOrder:(BOOL)a1;
- (void)updateMapStyleData:(id)a0;
- (void)resetMapStyleData;
- (id)resolveStyleJSONList:(id)a0;
- (void)recordCustomStyleStats:(long long)a0;
- (id)initWithConfigPreference:(id)a0;
- (void)setupStylePlist;
- (void)setupStyleList;
- (void).cxx_destruct;

@end
