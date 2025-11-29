@class NSString, NSDictionary;

@interface BUYYClassInfo : NSObject {
    BOOL _needUpdate;
}

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) Class superCls;
@property (readonly, nonatomic) Class metaCls;
@property (readonly, nonatomic) BOOL isMeta;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BUYYClassInfo *superClassInfo;
@property (readonly, nonatomic) NSDictionary *ivarInfos;
@property (readonly, nonatomic) NSDictionary *methodInfos;
@property (readonly, nonatomic) NSDictionary *propertyInfos;

+ (id)classInfoWithClassName:(id)a0;
+ (id)classInfoWithClass:(Class)a0;

- (void)setNeedUpdate;
- (BOOL)needUpdate;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithClass:(Class)a0;

@end
