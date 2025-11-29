@class NSString, NSMutableArray;

@interface AWEIMPBChatAIPetSyncMemoryResponse : GPBMessage

@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL hasStatusMsg;
@property (retain, nonatomic) NSMutableArray *successDevicesArray;
@property (readonly, nonatomic) unsigned long long successDevicesArray_Count;

+ (id)descriptor;

@end
