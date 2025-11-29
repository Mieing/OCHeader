@class NSString, NSNumber;

@interface AWEFlashMobFlashMobStickerConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerBgColor;
@property (retain, nonatomic) NSNumber *stickerBgRadius;
@property (nonatomic) BOOL hasAvatars;
@property (nonatomic) BOOL hasJoinBtn;
@property (nonatomic) BOOL hasFlashTips;
@property (retain, nonatomic) NSNumber *stickerInitHeight;
@property (retain, nonatomic) NSNumber *stickerInitWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
