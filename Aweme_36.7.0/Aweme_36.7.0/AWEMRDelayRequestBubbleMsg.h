@class NSString, NSArray;

@interface AWEMRDelayRequestBubbleMsg : NSObject

@property (retain, nonatomic) NSString *originSource;
@property (nonatomic) unsigned long long delayReason;
@property (retain, nonatomic) NSArray *showedBubbles;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
