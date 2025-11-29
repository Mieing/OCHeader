@class NSArray, NSDictionary, ACCURS, NSString;

@interface ABKInfoStickerConfig : ABKBaseStickerConfig

@property (retain, nonatomic) NSArray *effectInfo;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) ACCURS *urs;
@property (retain, nonatomic) NSString *path;

- (void).cxx_destruct;

@end
