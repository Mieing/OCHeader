@class NSArray, NSString, NSData, WCFinderRedDotCtrlInfo;

@interface WCFinderAppendTabDatasModel : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSArray *appendContentVMArray;
@property (retain, nonatomic) NSArray *appendDataItemsArray;
@property (retain, nonatomic) NSArray *appendPostDataItemsArray;
@property (copy, nonatomic) NSString *scrollToFeedId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;

- (id)description;
- (BOOL)hasAppendData;
- (BOOL)shouldRefreshTopData;
- (void)triggerCheckPostDataItems;
- (void).cxx_destruct;

@end
