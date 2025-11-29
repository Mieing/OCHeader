@interface IESLiveIMByteLinkPayloadDecoder : IESLiveIMPayloadDecoder

@property (nonatomic) BOOL needPrefix;

- (Class)messageClassWith:(id)a0;
- (long long)checkWrapper:(id)a0 andTransformResult:(id)a1;
- (id)init;

@end
