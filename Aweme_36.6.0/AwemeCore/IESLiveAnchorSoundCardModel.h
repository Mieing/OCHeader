@class NSString;

@interface IESLiveAnchorSoundCardModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) id /* block */ valueDidChanged;
@property (nonatomic, getter=isOn) BOOL on;

- (void).cxx_destruct;

@end
