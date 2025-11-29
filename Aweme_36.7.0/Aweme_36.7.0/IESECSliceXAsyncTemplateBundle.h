@class NSString;
@protocol IESECSliceXTemplateMetaData;

@interface IESECSliceXAsyncTemplateBundle : NSObject <IESECSliceXAsyncTemplateBundle>

@property (readonly, nonatomic) id<IESECSliceXTemplateMetaData> metaData;
@property (readonly, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 version:(id)a1 url:(id)a2;
- (void).cxx_destruct;

@end
