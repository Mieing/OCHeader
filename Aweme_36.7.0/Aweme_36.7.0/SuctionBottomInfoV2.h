@class NSString, SuctionBottomFrequencyV2;

@interface SuctionBottomInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *btnText;
@property (nonatomic) BOOL hasBtnText;
@property (copy, nonatomic) NSString *lynxURL;
@property (nonatomic) BOOL hasLynxURL;
@property (nonatomic) int containerHeight;
@property (nonatomic) BOOL hasContainerHeight;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hasDuration;
@property (retain, nonatomic) SuctionBottomFrequencyV2 *frequencyControl;
@property (nonatomic) BOOL hasFrequencyControl;
@property (copy, nonatomic) NSString *buttonSchema;
@property (nonatomic) BOOL hasButtonSchema;
@property (nonatomic) int suctionBottomType;
@property (nonatomic) BOOL hasSuctionBottomType;

+ (id)descriptor;

@end
