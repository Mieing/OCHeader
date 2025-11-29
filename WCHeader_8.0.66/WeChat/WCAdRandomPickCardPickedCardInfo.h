@class NSString;

@interface WCAdRandomPickCardPickedCardInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_timestamp;
+ (void)initialize;

@end
