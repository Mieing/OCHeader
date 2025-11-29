@class NSString, TrueKindaOnePxLineView;

@interface KindaOnePxLineView : KindaView <MMKOnePxLineView>

@property (retain, nonatomic) TrueKindaOnePxLineView *line;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getView;
- (void).cxx_destruct;

@end
