@class NSString;
@protocol IESLiveRecoder;

@interface AWELiveRecoderWrapper : NSObject <AWELiveCamera>

@property (retain, nonatomic) id<IESLiveRecoder> liveRecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecoder:(id)a0;
- (void).cxx_destruct;

@end
