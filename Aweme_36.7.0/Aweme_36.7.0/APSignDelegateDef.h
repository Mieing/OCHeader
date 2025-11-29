@class NSString;

@interface APSignDelegateDef : NSObject <APSignProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getColorInfo:(int)a0 biz:(id)a1 param:(id)a2 ext:(id)a3 error:(id *)a4;

@end
