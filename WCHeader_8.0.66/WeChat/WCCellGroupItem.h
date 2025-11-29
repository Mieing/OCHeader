@class NSString, NSMutableArray, WCMomentsPageContext;

@interface WCCellGroupItem : NSObject

@property (nonatomic) long long m_type;
@property (retain, nonatomic) NSMutableArray *m_arrPhotoDatas;
@property (nonatomic) long long m_year;
@property (retain, nonatomic) NSString *m_nsTip;
@property (retain, nonatomic) NSString *m_nsSubTip;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long accessoryContentType;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (nonatomic) BOOL isStarEnabled;

+ (long long)groupTypeForDataItem:(id)a0;

- (id)init;
- (BOOL)isSomeWCDataItemUnsafe;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (void).cxx_destruct;

@end
