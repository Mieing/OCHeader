@class NSString, NSMutableArray, NSData;

@interface AWEIMPBChatAIPetSyncMemoryRequest : GPBMessage

@property (copy, nonatomic) NSString *syncGroupId;
@property (nonatomic) BOOL hasSyncGroupId;
@property (nonatomic) long long seqNum;
@property (nonatomic) BOOL hasSeqNum;
@property (copy, nonatomic) NSString *cmd;
@property (nonatomic) BOOL hasCmd;
@property (nonatomic) int convType;
@property (nonatomic) BOOL hasConvType;
@property (copy, nonatomic) NSString *convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (retain, nonatomic) NSMutableArray *targetDevicesArray;
@property (readonly, nonatomic) unsigned long long targetDevicesArray_Count;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (copy, nonatomic) NSData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
