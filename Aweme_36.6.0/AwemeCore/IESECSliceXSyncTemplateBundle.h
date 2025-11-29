@class NSDictionary, NSString;
@protocol IESECSliceXTemplateMetaData;

@interface IESECSliceXSyncTemplateBundle : NSObject <IESECSliceXSyncTemplateBundle>

@property (readonly, nonatomic) id<IESECSliceXTemplateMetaData> metaData;
@property (readonly, nonatomic) NSDictionary *jsonDict;
@property (readonly, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 version:(id)a1 url:(id)a2;
- (id)initWithName:(id)a0 version:(id)a1 jsonDict:(id)a2;
- (void).cxx_destruct;

@end
