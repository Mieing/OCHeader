@class NSString;
@protocol IESVideoPlayerProtocol;

@interface IESECLeaveVideoDetailTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
