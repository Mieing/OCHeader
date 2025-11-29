@class NSString;

@interface AFDPlayRemoteAwemeModelProcessor : NSObject <AFDPlayRemoteAwemeModelProcessorProtocol>

@property (nonatomic) BOOL supportRichAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transferAwemeListIfNeededWithArray:(id)a0;
- (id)transferAwemeModelForLive:(id)a0;

@end
