@class NSString, HTSLiveImage;

@interface IESLiveBattleDrawPropNode : NSObject

@property (retain, nonatomic) HTSLiveImage *animationResource;
@property (nonatomic) BOOL isGetBufferCard;
@property (nonatomic) BOOL needDropAnimation;
@property (nonatomic) long long propId;
@property (copy, nonatomic) NSString *getType;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
