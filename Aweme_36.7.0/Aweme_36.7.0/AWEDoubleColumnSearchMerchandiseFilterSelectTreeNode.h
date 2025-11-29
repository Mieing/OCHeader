@class NSString, AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel, NSMutableArray;

@interface AWEDoubleColumnSearchMerchandiseFilterSelectTreeNode : NSObject

@property (copy, nonatomic) NSString *dataID;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel *businessInfo;
@property (nonatomic) BOOL shouldAddUserManualSelectInfo;
@property (nonatomic, getter=isUserManualSelect) BOOL userManualSelect;
@property (retain, nonatomic) NSMutableArray *childNodes;

- (id)jsonify;
- (id)initWithDataID:(id)a0 businessInfo:(id)a1;
- (void).cxx_destruct;
- (void)appendNode:(id)a0;

@end
