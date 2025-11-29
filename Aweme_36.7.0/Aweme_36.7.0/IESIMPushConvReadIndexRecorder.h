@class NSString;

@interface IESIMPushConvReadIndexRecorder : HTSService <IESIMPushConvReadIndexRecorder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordReadIndex:(long long)a0 ofConvID:(id)a1;

@end
