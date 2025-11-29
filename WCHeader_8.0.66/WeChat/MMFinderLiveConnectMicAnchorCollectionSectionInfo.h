@class NSString, NSMutableArray;

@interface MMFinderLiveConnectMicAnchorCollectionSectionInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL show;
@property (nonatomic) BOOL hasConnectingUser;
@property (retain, nonatomic) NSMutableArray *data;
@property (retain, nonatomic) NSMutableArray *displayItems;
@property (readonly, nonatomic) NSString *expandCellTitle;
@property (readonly, nonatomic) NSString *headerTitle;

- (BOOL)isLoadingSection;
- (BOOL)useSingleColumn;
- (BOOL)useDoubleColumn;
- (BOOL)showExpand;
- (BOOL)showTipsLabel;
- (BOOL)showConnectingOperation;
- (id)updateDisplayItems;
- (void).cxx_destruct;

@end
