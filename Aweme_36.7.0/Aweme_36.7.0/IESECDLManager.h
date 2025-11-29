@class IESECDLBuilder, NSMutableDictionary;

@interface IESECDLManager : NSObject

@property (retain, nonatomic) IESECDLBuilder *builder;
@property (retain, nonatomic) NSMutableDictionary *dynamicModelDict;
@property (retain, nonatomic) NSMutableDictionary *componentClassMap;

+ (id)sharedManager;

- (Class)getComponentClassWithViewType:(id)a0;
- (id)getDLModelForKey:(id)a0 scene:(id)a1;
- (id)parseDLModelByLayout:(id)a0;
- (void)parseWithDynamicViewsConfig:(id)a0;
- (void)setCustomComponentMapWithDict:(id)a0;
- (void).cxx_destruct;

@end
