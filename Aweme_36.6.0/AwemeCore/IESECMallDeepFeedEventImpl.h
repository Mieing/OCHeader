@class NSDictionary, UICollectionViewCell, UIView;

@interface IESECMallDeepFeedEventImpl : NSObject <IESECMallDeepFeedEvent>

@property (retain, nonatomic) UIView *sender;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) UICollectionViewCell *cell;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)initEventWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
