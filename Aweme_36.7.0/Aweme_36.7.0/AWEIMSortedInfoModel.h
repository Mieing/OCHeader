@class NSString;

@interface AWEIMSortedInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long conversationID;
@property (nonatomic) int type;
@property (nonatomic) long long bizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
