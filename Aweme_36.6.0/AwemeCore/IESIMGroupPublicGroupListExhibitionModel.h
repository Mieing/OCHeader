@interface IESIMGroupPublicGroupListExhibitionModel : IESIMGroupOpenCapabilityModel

@property (nonatomic) BOOL isShowGroupDescription;
@property (nonatomic) BOOL isShowGroupEntryLimit;
@property (nonatomic) long long invokeChannel;
@property (copy, nonatomic) id /* block */ completion;

+ (id)optionalPropertyNameSet;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
