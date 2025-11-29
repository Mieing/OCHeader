@class NSString;

@interface IESLiveGameSEIPort : NSObject <IESLiveAAIGamePortDelegate>

@property (copy, nonatomic) id /* block */ throwPacketBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void).cxx_destruct;

@end
