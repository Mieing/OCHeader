@class NSString, NSMutableDictionary, AWEDanmakuPendantMaterial;

@interface AWEDanmakuInputModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) long long offsetTimeMS;
@property (readonly, nonatomic) long long inputOffsetTimeMS;
@property (readonly, nonatomic) unsigned long long danmakuTypeBits;
@property (readonly, copy, nonatomic) NSString *replyDanmakuID;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (retain, nonatomic) AWEDanmakuPendantMaterial *pendantMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
