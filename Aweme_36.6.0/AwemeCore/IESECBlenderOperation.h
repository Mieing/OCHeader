@class NSString;
@protocol IESECBlenderNodeProtocol;

@interface IESECBlenderOperation : MTLModel <IESECBlenderNodeOperationProtocol>

@property (retain, nonatomic) NSString *op;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id<IESECBlenderNodeProtocol> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
