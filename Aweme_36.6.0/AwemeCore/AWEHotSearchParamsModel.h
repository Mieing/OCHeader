@class NSString, AWEHotSearchExpandRelatedSpotModel, NSArray;

@interface AWEHotSearchParamsModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *currentWord;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *trendEntryWord;
@property (nonatomic) unsigned long long verticalBoardType;
@property (copy, nonatomic) NSString *verticalBoardSubType;
@property (nonatomic) BOOL needBoardTab;
@property (copy, nonatomic) NSString *boardTabName;
@property (copy, nonatomic) NSString *hotSpotServerParamStr;
@property (nonatomic) long long entryType;
@property (copy, nonatomic) NSString *sentenceID;
@property (nonatomic) BOOL isPinnedTop;
@property (retain, nonatomic) AWEHotSearchExpandRelatedSpotModel *expandRelatedSpotModel;
@property (copy, nonatomic) NSArray *boardTabsArray;

+ (id)entryTypeStr:(long long)a0;

- (void).cxx_destruct;

@end
