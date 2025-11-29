@class NSString, NSAttributedString, AWEAwemeModel;

@interface AWELivePreCardViewModel : NSObject

@property (nonatomic) long long cardType;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) NSString *cardTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSAttributedString *detail;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *effectPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long playerState;
@property (copy, nonatomic) id /* block */ effectPathDidUpdate;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ enterRoomAction;
@property (copy, nonatomic) id /* block */ modelDidUpdateAction;
@property (copy, nonatomic) id /* block */ playerStateDidChangeAction;

- (void)updatePlayerState:(long long)a0;
- (id)initWithCardType:(long long)a0;
- (void)prepareResourceIfNeeded;
- (void)downloadResource;
- (void)updateEffectPath:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)updateModel:(id)a0;

@end
