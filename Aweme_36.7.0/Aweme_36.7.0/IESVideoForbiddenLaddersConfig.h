@class NSArray, NSString;

@interface IESVideoForbiddenLaddersConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *forbiddenLaddersVQ;
@property (retain, nonatomic) NSArray *forbiddenLaddersBitratelt;
@property (retain, nonatomic) NSArray *forbiddenLaddersBitrategt;
@property (retain, nonatomic) NSArray *forbiddenLaddersCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
