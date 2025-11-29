@class NSNumber;

@interface MegaVideoPlayerTextureInfo : NSObject

@property (retain, nonatomic) NSNumber *playerId;
@property (retain, nonatomic) NSNumber *textureId;
@property (retain, nonatomic) NSNumber *textureWidth;
@property (retain, nonatomic) NSNumber *textureHeight;

+ (id)makeWithPlayerId:(id)a0 textureId:(id)a1 textureWidth:(id)a2 textureHeight:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
