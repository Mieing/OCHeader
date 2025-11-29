@class AWEECOMIMFoldGroupConfig, AWEECOMIMFoldInfoModel, NSMutableArray;
@protocol AWEECOMIMPaasMessageBridgeProtocol;

@interface AWEECOMIMFoldGroupModel : NSObject

@property (readonly) id<AWEECOMIMPaasMessageBridgeProtocol> anchorMessage;
@property (readonly) AWEECOMIMFoldInfoModel *anchorFoldInfo;
@property (readonly) long long anchorReadIndex;
@property (readonly) long long latestReadIndex;
@property (retain) NSMutableArray *foldOriginMessageArr;
@property (retain) AWEECOMIMFoldGroupConfig *foldGroupConfig;

- (void)updateWithAnchorMessage:(id)a0 anchorFoldInfo:(id)a1;
- (void)updateWithAnchorReadIndex:(long long)a0;
- (void)updateWithLatestReadIndex:(long long)a0;
- (void).cxx_destruct;

@end
