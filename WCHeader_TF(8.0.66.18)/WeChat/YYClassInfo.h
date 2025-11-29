@class NSString, NSDictionary;

@interface YYClassInfo : NSObject {
    BOOL _needUpdate;
}

@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) Class superCls;
@property (readonly, nonatomic) Class metaCls;
@property (readonly, nonatomic) BOOL isMeta;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) YYClassInfo *superClassInfo;
@property (readonly, nonatomic) NSDictionary *propertyInfos;

+ (id)classInfoWithClass:(Class)a0;
+ (id)classInfoWithClassName:(id)a0;

- (id)initWithClass:(Class)a0;
- (void)_update;
- (void)setNeedUpdate;
- (BOOL)needUpdate;
- (void).cxx_destruct;

@end
