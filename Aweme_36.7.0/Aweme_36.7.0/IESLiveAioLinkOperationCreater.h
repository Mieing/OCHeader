@interface IESLiveAioLinkOperationCreater : NSObject

+ (id)makeCreateChannelWithChannelID:(id)a0 service:(id)a1 method:(id)a2;
+ (id)makeWriteChannelWithChannelID:(id)a0 params:(id)a1 error:(id)a2;
+ (id)makeCloseChannelWithChannelID:(id)a0 closeRead:(BOOL)a1;
+ (id)makeCreateOperationWithChannelID:(id)a0 service:(id)a1 method:(id)a2;
+ (id)makeWriteOperationWithChannelID:(id)a0 params:(id)a1 error:(id)a2;
+ (id)makeCloseOperationWithChannelID:(id)a0 closeRead:(BOOL)a1;
+ (id)makeCallLynxOperationWithChannelID:(id)a0 service:(id)a1 method:(id)a2 params:(id)a3 error:(id)a4;
+ (id)createChannelData:(id)a0 method:(id)a1 tag:(id)a2;
+ (id)writeChannelData:(id)a0 params:(id)a1 error:(id)a2;
+ (id)closeChannelData:(id)a0 closeRead:(BOOL)a1;

@end
