@class NSMutableDictionary;

@interface QTCAutoCodingCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *typeEncodingToCls;

+ (id)center;

- (id)init;
- (void)registerObjcTypeWrapperClass:(Class)a0;
- (Class)classForObjcType:(id)a0;
- (void).cxx_destruct;

@end
