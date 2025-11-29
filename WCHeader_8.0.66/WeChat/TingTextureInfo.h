@class NSNumber;

@interface TingTextureInfo : NSObject

@property (retain, nonatomic) NSNumber *textureId;
@property (retain, nonatomic) NSNumber *textureWidth;
@property (retain, nonatomic) NSNumber *textureHeight;

+ (id)makeWithTextureId:(id)a0 textureWidth:(id)a1 textureHeight:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
