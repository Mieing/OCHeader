@class NSString;

@interface IESLiveInteractMixPicStreamConfig : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) long long zOrder;
@property (nonatomic) long long alpha;
@property (nonatomic) long long renderMode;
@property (nonatomic) struct __CVBuffer { } *buffer;
@property (nonatomic) long long pts;

- (void).cxx_destruct;

@end
