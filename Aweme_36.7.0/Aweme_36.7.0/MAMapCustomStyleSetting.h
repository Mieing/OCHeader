@class UIColor, NSString, NSData, NSNumber;

@interface MAMapCustomStyleSetting : NSObject

@property (nonatomic) long long version;
@property (nonatomic) BOOL ignoreTexture;
@property (retain, nonatomic) NSString *textureDataPath;
@property (retain, nonatomic) NSData *textureData;
@property (retain, nonatomic) UIColor *bgTileColor;
@property (retain, nonatomic) NSData *webJsonData;
@property (retain, nonatomic) NSData *styleDataNormal;
@property (retain, nonatomic) NSData *styleDataAll;
@property (retain, nonatomic) NSNumber *trafficRoadBackColor;
@property (retain, nonatomic) NSData *styleDataV3;
@property (retain, nonatomic) NSData *extraStyleDataV3;
@property (copy, nonatomic) NSString *styleResPathV3;
@property (nonatomic) BOOL isResetTextureDataV3;

- (void).cxx_destruct;

@end
