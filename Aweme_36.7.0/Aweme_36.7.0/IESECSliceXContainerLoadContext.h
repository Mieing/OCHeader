@class NSString, IESECSliceXResourceMetaData;

@interface IESECSliceXContainerLoadContext : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESECSliceXResourceMetaData *metaData;
@property (copy, nonatomic) id /* block */ complete;

- (id)initWithURL:(id)a0 metaData:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;

@end
