@class NSString;

@interface AWELiteGameStickerInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerId;
@property (nonatomic) long long actualAwardNum;
@property (nonatomic) double coefficient;
@property (nonatomic) BOOL isRedPacket;
@property (nonatomic) long long limitAwardNum;
@property (nonatomic) long long minAwardNum;
@property (nonatomic) BOOL overByUser;
@property (nonatomic) BOOL isNext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
