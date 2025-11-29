@class NSString;
@protocol AWESearchAIGCCardControlsProtocol;

@interface AWESearchAIGCResultContext : AWESearchCachalotResultContext <AWESearchAIGCResultContextProtocol>

@property (nonatomic) BOOL isLocalHistory;
@property (weak, nonatomic) id<AWESearchAIGCCardControlsProtocol> bizDelegate;
@property (retain, nonatomic) id bizContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
