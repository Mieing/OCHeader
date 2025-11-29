@class GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNMessageRead : GPBMessage

@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL receiverIsRead;
@property (nonatomic) BOOL hasReceiverIsRead;
@property (retain, nonatomic) GPBInt64Array *readUidsArray;
@property (readonly, nonatomic) unsigned long long readUidsArray_Count;
@property (retain, nonatomic) GPBInt64Array *unreadUidsArray;
@property (readonly, nonatomic) unsigned long long unreadUidsArray_Count;
@property (nonatomic) long long messageVersion;
@property (nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
