@class NSString;

@interface IESInfoTextTemplateStickerParams : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *dependeResourceString;

+ (id)paramsWithDic:(id)a0;

- (id)toDicInfo;
- (id)absoluteResourcePath;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
