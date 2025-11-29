@class NSString;

@interface WCFinderMPVideoFeedModel : NSObject <YYModel>

@property (copy, nonatomic) NSString *exportID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoDataStr:(id)a0;
- (void).cxx_destruct;

@end
