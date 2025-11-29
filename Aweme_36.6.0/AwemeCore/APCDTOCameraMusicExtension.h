@class NSDictionary, NSString;
@protocol ACCMusicModelProtocol;

@interface APCDTOCameraMusicExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) long long musicSelectFrom;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> sameStickerMusic;
@property (copy, nonatomic) NSDictionary *recommendExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
