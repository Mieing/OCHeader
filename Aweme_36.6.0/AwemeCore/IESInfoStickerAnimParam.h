@class NSString;

@interface IESInfoStickerAnimParam : NSObject <NSCopying>

@property (nonatomic) int animType;
@property (retain, nonatomic) NSString *animPath;
@property (nonatomic) double animDuration;
@property (retain, nonatomic) NSString *animPropertyKey;
@property (retain, nonatomic) NSString *animPropertyVal;

+ (id)stickerAnimParamWithDic:(id)a0;

- (id)toDicParam;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
