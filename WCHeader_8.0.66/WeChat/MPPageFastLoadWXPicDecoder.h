@class NSString;

@interface MPPageFastLoadWXPicDecoder : NSObject

@property (copy, nonatomic) NSString *sceneTag;

+ (id)fallbackContentType;

- (id)initWithSceneTag:(id)a0;
- (BOOL)isWxPicData:(id)a0;
- (id)decodePossibleWxPic:(id)a0 withImageType:(id)a1 error:(id *)a2;
- (int)convertPicType:(id)a0;
- (id)contentTypeForData:(id)a0;
- (void).cxx_destruct;

@end
