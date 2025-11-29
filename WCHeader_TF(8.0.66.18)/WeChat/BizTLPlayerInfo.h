@class NSNumber, BizTLTextureInfo;

@interface BizTLPlayerInfo : NSObject

@property (retain, nonatomic) BizTLTextureInfo *textureInfo;
@property (retain, nonatomic) NSNumber *playerId;

+ (id)makeWithTextureInfo:(id)a0 playerId:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
