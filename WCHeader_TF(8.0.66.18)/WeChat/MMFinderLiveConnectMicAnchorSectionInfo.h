@class NSArray, NSMutableArray, NSString;

@interface MMFinderLiveConnectMicAnchorSectionInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL show;
@property (retain, nonatomic) NSMutableArray *data;
@property (readonly, nonatomic) NSArray *displayItems;
@property (readonly, nonatomic) NSString *expandCellTitle;
@property (readonly, nonatomic) NSString *headerTitle;

- (BOOL)showExpand;
- (void).cxx_destruct;

@end
