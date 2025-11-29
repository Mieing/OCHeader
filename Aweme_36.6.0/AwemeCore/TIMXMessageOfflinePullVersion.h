@class NSNumber, NSArray;

@interface TIMXMessageOfflinePullVersion : NSObject

@property (retain, nonatomic) NSNumber *conversationVersion;
@property (retain, nonatomic) NSNumber *threadVersion;
@property (retain, nonatomic) NSNumber *strangerVersion;
@property (retain, nonatomic) NSNumber *liveConsultVersion;
@property (retain, nonatomic) NSNumber *cmdMessageIndex;
@property (retain, nonatomic) NSNumber *markReadVersion;
@property (retain, nonatomic) NSNumber *threadReadVersion;
@property (retain, nonatomic) NSNumber *cmdChainV2IndexN;
@property (copy, nonatomic) NSArray *pullingRange;

- (void).cxx_destruct;

@end
