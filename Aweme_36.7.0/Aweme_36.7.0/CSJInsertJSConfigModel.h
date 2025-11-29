@class NSString, CSJPerformanceJSModel;

@interface CSJInsertJSConfigModel : NSObject <BUYYModel, NSSecureCoding, CSJModelSerialization>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CSJPerformanceJSModel *performanceJS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)a0;

@end
