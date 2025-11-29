@interface YtJsonGen : NSObject

+ (id)sharedInstance;
+ (id)getUploadDic:(float)a0 withChangePointNum:(int)a1 withExtraConfig:(id)a2 withClientVersion:(id)a3 withControlConfig:(id)a4;

- (id)init;
- (id)convertToJsonData:(id)a0;
- (id)ComposeGetLiveTypeReqWith:(id)a0;
- (id)ComposeLipReadRequestWith:(id)a0;
- (void)printFloat5P:(id)a0 tag:(id)a1;

@end
