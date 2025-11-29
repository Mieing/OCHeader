@class UIGestureRecognizer;

@interface IESLivePlaybackGesture : NSObject

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) UIGestureRecognizer *recognizer;
@property (nonatomic) BOOL allowLandscapeRespond;
@property (nonatomic) BOOL cancelsTouchesInView;
@property (copy, nonatomic) id /* block */ shouldBegin;
@property (copy, nonatomic) id /* block */ shouldReceiveTouch;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL allowAnchor;

+ (id)initRecognizerBy:(unsigned long long)a0;
+ (id)initRelatedRecognizerBy:(unsigned long long)a0;

- (id)initByIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
