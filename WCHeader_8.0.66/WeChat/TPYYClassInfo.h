@class NSString, NSDictionary;

@interface TPYYClassInfo : NSObject {
    BOOL _needUpdate;
}

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) Class superCls;
@property (readonly, nonatomic) Class metaCls;
@property (readonly, nonatomic) BOOL isMeta;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) TPYYClassInfo *superClassInfo;
@property (readonly, nonatomic) NSDictionary *ivarInfos;
@property (readonly, nonatomic) NSDictionary *methodInfos;
@property (readonly, nonatomic) NSDictionary *propertyInfos;

+ (id)classInfoWithClass:(Class)a0;
+ (id)classInfoWithClassName:(id)a0;

- (id)initWithClass:(Class)a0;
- (void)_update;
- (void)setNeedUpdate;
- (BOOL)needUpdate;
- (void).cxx_destruct;

@end
