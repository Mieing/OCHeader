@class NSArray, WCAddressBaseAddress;

@interface WCAddressControlData : NSObject

@property (retain, nonatomic) WCAddressBaseAddress *structSelectBaseAddress;
@property (retain, nonatomic) WCAddressBaseAddress *structEditBaseAddress;
@property (retain, nonatomic) NSArray *m_arrAllAddress;
@property (retain, nonatomic) NSArray *m_arrAddressStageData;
@property (nonatomic) BOOL m_bNeedForbidStatusBarInset;
@property (nonatomic) BOOL forbidDarkmode;
@property (nonatomic) BOOL isInSheetMode;
@property (nonatomic) BOOL needDismissToParentVCOnAddAddress;
@property (nonatomic) BOOL isDirectOpenAddAddress;
@property (nonatomic) BOOL isInGiftMode;
@property (nonatomic) BOOL isSelectAddressFilledByFriend;
@property (nonatomic) unsigned int outerSelectedAddressID;
@property (nonatomic) BOOL isManagerMode;
@property (nonatomic) unsigned long long entryScene;
@property (readonly, nonatomic) BOOL isSelectMode;
@property (readonly, nonatomic) unsigned int selectedAddressID;

+ (id)getSelectAddressDicFromAddress:(id)a0 withAddressID:(BOOL)a1;

- (void).cxx_destruct;

@end
