@class NSString;

@interface ACCVdetectAlogSerivce : NSObject <IESVdetectAlogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doLog:(id)a0 level:(long long)a1 tag:(id)a2;

@end
