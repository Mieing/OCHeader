@class NSString;

@interface IESLiveVirtualLiveXPlayGameData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *gameName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
