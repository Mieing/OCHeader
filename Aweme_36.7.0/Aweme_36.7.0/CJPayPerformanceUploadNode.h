@class NSString;

@interface CJPayPerformanceUploadNode : JSONModel <NSCopying>

@property (copy, nonatomic) NSString *typeStr;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL need_extra;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (unsigned long long)curType;
- (BOOL)matchToPerformanceStage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
