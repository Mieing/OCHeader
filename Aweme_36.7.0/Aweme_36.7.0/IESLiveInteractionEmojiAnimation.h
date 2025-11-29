@class HTSLiveUser, NSArray, IESLiveInteractionEmojiModel, HTSLiveImage, HTSLiveLinkMicSendEmojiMessage;
@protocol IESLiveSubscription, IESLiveCompoundSubscription;

@interface IESLiveInteractionEmojiAnimation : NSObject

@property (retain, nonatomic) IESLiveInteractionEmojiModel *emojiModel;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) struct CGPoint { double x; double y; } fromCenter;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (copy, nonatomic) NSArray *toUsers;
@property (nonatomic) unsigned long long checkResult;
@property (copy, nonatomic) NSArray *interactGiftCommands;
@property (retain, nonatomic) HTSLiveImage *resultImage;
@property (retain, nonatomic) HTSLiveLinkMicSendEmojiMessage *message;
@property (nonatomic) double startPlayingTime;
@property (copy, nonatomic) id /* block */ animationCompletion;

- (id)observeUserIds;
- (void).cxx_destruct;

@end
