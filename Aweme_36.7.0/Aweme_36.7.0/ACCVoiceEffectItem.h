@class NSArray, NSString, NSError, IESEffectModel;

@interface ACCVoiceEffectItem : NSObject <ACCVoiceEffectItemProtocol>

@property (retain, nonatomic) IESEffectModel *effect;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long loadStatus;
@property (nonatomic) BOOL favorite;
@property (copy, nonatomic) id /* block */ loadingStatusChange;
@property (copy, nonatomic) id /* block */ selectStatusChange;
@property (retain, nonatomic) id preparedResult;
@property (retain, nonatomic) NSError *preparedError;
@property (nonatomic) BOOL isStreamTTSPlaying;
@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (nonatomic) Class customCellClz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetInitStatus;
- (void).cxx_destruct;

@end
