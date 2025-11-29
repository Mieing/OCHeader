@class NSString, NSMutableDictionary;

@interface LynxVideoService : NSObject <LynxServiceVideoProtocol>

@property (retain, nonatomic) NSMutableDictionary *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLynxVideoPlayableWithKey:(id)a0;
- (void).cxx_destruct;

@end
