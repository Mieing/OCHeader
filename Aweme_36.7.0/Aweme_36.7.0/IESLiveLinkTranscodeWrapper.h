@class IESLiveLinkMultiCaster;
@protocol IESLiveLinkTranscoder;

@interface IESLiveLinkTranscodeWrapper : NSObject

@property (retain, nonatomic) id<IESLiveLinkTranscoder> liveTranscoder;
@property (retain, nonatomic) IESLiveLinkMultiCaster *eventObserver;
@property (retain, nonatomic) IESLiveLinkMultiCaster *dataObserver;

- (void).cxx_destruct;
- (id)init;

@end
