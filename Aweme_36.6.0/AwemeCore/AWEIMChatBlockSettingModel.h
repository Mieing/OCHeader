@class NSArray;

@interface AWEIMChatBlockSettingModel : AWEBaseApiModel

@property (nonatomic) BOOL blockSwitch;
@property (nonatomic) long long blockStartTimestamp;
@property (nonatomic) long long blockDuration;
@property (retain, nonatomic) NSArray *availableBlockDurationList;
@property (retain, nonatomic) NSArray *selectedSmartBlockList;
@property (nonatomic) long long smartBlockSwitch;
@property (retain, nonatomic) NSArray *availableSmartBlockList;
@property (retain, nonatomic) NSArray *selfDefinedBlockWordList;

+ (id)availableSmartBlockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
