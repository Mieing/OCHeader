@class NSMutableDictionary;

@interface HTSLivePetMeta : IESLivePBBaseMessage

@property (nonatomic) long long petType;
@property (nonatomic) long long petStatus;
@property (retain, nonatomic) NSMutableDictionary *assetIds;
@property (readonly, nonatomic) unsigned long long assetIds_Count;
@property (nonatomic) long long petLevel;

+ (id)descriptor;

@end
