@class NSString;

@interface AWEIMFacePuzzleEffectCache : NSObject

@property (copy, nonatomic) NSString *effectPath;
@property (copy, nonatomic) NSString *effectType;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) double updateTime;

- (void)updateCacheWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
