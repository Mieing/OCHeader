@interface AWEGeneralSearchSubCardInfo : AWEBaseApiModel

@property (nonatomic) long long index;
@property (nonatomic) long long count;
@property (nonatomic) long long docType;
@property (nonatomic) unsigned long long cardType;

- (BOOL)isBottomCard;
- (BOOL)isTopCard;

@end
