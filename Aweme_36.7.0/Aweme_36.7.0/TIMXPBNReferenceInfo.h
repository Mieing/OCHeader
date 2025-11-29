@class NSString, NSMutableDictionary;

@interface TIMXPBNReferenceInfo : GPBMessage

@property (nonatomic) long long referencedMessageId;
@property (nonatomic) BOOL hasReferencedMessageId;
@property (copy, nonatomic) NSString *hint;
@property (nonatomic) BOOL hasHint;
@property (nonatomic) long long refMessageType;
@property (nonatomic) BOOL hasRefMessageType;
@property (nonatomic) int referencedMessageStatus;
@property (nonatomic) BOOL hasReferencedMessageStatus;
@property (nonatomic) long long rootMessageId;
@property (nonatomic) BOOL hasRootMessageId;
@property (nonatomic) long long rootMessageConvIndex;
@property (nonatomic) BOOL hasRootMessageConvIndex;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) long long refMsgIndexInConvV1;
@property (nonatomic) BOOL hasRefMsgIndexInConvV1;
@property (nonatomic) long long refMsgIndexInConvV2;
@property (nonatomic) BOOL hasRefMsgIndexInConvV2;
@property (nonatomic) int refMsgInvisibleInMrContentShare;
@property (nonatomic) BOOL hasRefMsgInvisibleInMrContentShare;

+ (id)descriptor;

@end
