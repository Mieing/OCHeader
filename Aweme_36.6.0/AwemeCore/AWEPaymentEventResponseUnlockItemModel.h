@class NSString;

@interface AWEPaymentEventResponseUnlockItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *contentID;
@property (nonatomic) long long episodeRank;
@property (nonatomic) unsigned long long videoType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
