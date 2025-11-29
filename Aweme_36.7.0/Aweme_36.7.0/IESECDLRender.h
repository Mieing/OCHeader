@class NSDictionary, IESECDLBuilder;

@interface IESECDLRender : NSObject

@property (retain, nonatomic) IESECDLBuilder *builder;
@property (retain, nonatomic) id customData;
@property (retain, nonatomic) NSDictionary *dataGroup;

- (void)renderData;
- (id)makeRenderModelWithUniqueID:(id)a0;
- (void).cxx_destruct;

@end
