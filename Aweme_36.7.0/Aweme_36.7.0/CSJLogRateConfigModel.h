@class NSString;

@interface CSJLogRateConfigModel : NSObject <CSJModelSerialization>

@property (nonatomic) float globalRate;
@property (nonatomic) float classPropertyRate;
@property (nonatomic) float getBiddingToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromDictionary:(id)a0;

- (id)toDictionary;

@end
