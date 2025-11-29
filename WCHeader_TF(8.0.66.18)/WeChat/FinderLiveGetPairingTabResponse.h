@class NSString, NSMutableArray;

@interface FinderLiveGetPairingTabResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSString *lastBuffer;
@property (retain, nonatomic) NSMutableArray *pairings;

+ (void)initialize;

@end
