@class NSString, UIView;

@interface IESLiveLinkRTCInteractVideoCanvas : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) unsigned long long renderMode;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) long long backgroundColor;

- (void).cxx_destruct;

@end
