@interface AWESiriDonationRequestParams : NSObject

@property (readonly, nonatomic) BOOL usingV3;
@property (readonly, nonatomic) unsigned long long requestScene;
@property (readonly, nonatomic) unsigned long long timingType;

- (id)initWithUsingV3:(BOOL)a0 requestScene:(unsigned long long)a1 timingType:(unsigned long long)a2;

@end
