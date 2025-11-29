@class NSString;

@interface WxamImageManager : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL exptWxam2Heif;
@property (nonatomic) BOOL exptOnlyStoreWxam;
@property (nonatomic) BOOL exptTransferWxam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)parseWxamDataToHeif:(id)a0;
- (id)parseWxamData:(id)a0;
- (id)parseWxamImg:(id)a0;
- (id)getJpgPathByWxam:(id)a0;
- (id)dirPathForWxamDecode;
- (id)tempPathForWxamDecode:(id)a0;
- (id)tempPathForHeif:(id)a0;
- (id)getWxamPathForUpload:(id)a0;
- (id)getPermanentWxamPathByMsg:(id)a0;

@end
