@class NSDictionary, NSArray;

@interface BSTSetupConfig : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSDictionary *abTestSettings;
@property (nonatomic) double samplingFrequency;
@property (nonatomic) long long maxNodeCount;
@property (nonatomic) BOOL enableListViewHook;
@property (nonatomic) BOOL enableBroNodeCheck;
@property (nonatomic) BOOL enableParentNodeCheck;
@property (nonatomic) BOOL useBtdKeyWindow;
@property (nonatomic) BOOL optimizeUniqueKey;
@property (nonatomic) BOOL enableKeyWindowCheck;
@property (nonatomic) BOOL enableCheckViewIsInTopVC;
@property (retain, nonatomic) NSDictionary *bstAlertConfig;
@property (nonatomic) BOOL enableV1;
@property (nonatomic) BOOL enableExposureLog;
@property (nonatomic) BOOL fixCompletionBtmError;
@property (nonatomic) BOOL enableProxyOpt;
@property (nonatomic) BOOL enableCollectionViewProxyOpt;
@property (copy, nonatomic) NSArray *tableViewBlockHookList;
@property (copy, nonatomic) NSArray *collectionViewBlockHookList;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;

@end
