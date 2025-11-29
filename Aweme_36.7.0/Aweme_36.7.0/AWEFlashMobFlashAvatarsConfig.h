@class NSNumber, NSString;

@interface AWEFlashMobFlashAvatarsConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *avatarsMarginBottom;
@property (retain, nonatomic) NSNumber *avatarsMarginLeft;
@property (retain, nonatomic) NSNumber *avatarsMarginRight;
@property (retain, nonatomic) NSNumber *avatarsMarginTop;
@property (retain, nonatomic) NSNumber *avatarsMaxCount;
@property (retain, nonatomic) NSNumber *avatarsUserCount;
@property (nonatomic) BOOL avatarsPicShow;
@property (nonatomic) BOOL avatarsUserCountShow;
@property (copy, nonatomic) NSString *avatarsUserCountColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
