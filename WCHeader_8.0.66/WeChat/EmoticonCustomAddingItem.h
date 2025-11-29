@class NSArray, EmotionFinderLinkInfo, NSString, NSMutableArray;

@interface EmoticonCustomAddingItem : NSObject

@property (nonatomic) BOOL allowsUploadWhenExceedLimit;
@property (nonatomic) unsigned long long addUI;
@property (nonatomic) unsigned long long addSource;
@property (retain, nonatomic) NSArray *imgDatas;
@property (retain, nonatomic) EmotionFinderLinkInfo *finderSourceInfo;
@property (retain, nonatomic) NSString *editSessionIdForReport;
@property (retain, nonatomic) NSArray *editAssetInfosForReport;
@property (nonatomic) BOOL needReportEditInfo;
@property (retain, nonatomic) NSMutableArray *editEmoticonWordings;
@property (nonatomic) unsigned long long addWay;

+ (id)createItemFromTask:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
