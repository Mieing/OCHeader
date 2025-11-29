@class NSString;

@interface ACCTextStickerExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *hashtagName;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *hotSpotText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hashtagExtraWithHashtagName:(id)a0;
+ (id)mentionExtraWithUserId:(id)a0 secUserID:(id)a1 nickName:(id)a2 followStatus:(long long)a3;
+ (id)sortedByLocationAscendingWithExtras:(id)a0;
+ (id)filteredValidExtrasInList:(id)a0 forType:(unsigned long long)a1;
+ (id)hotSpotExtraWithHotSpotID:(id)a0 hotSpotText:(id)a1;
+ (long long)numberOfValidExtrasInList:(id)a0 forType:(unsigned long long)a1;
+ (id)JSONKeyPathsByPropertyKey;

@end
