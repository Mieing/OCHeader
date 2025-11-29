@class NSString;

@interface IESEditorLoggerInstance : NSObject <IESEditorLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)IESEditorlogToLocal:(id)a0 andLevel:(long long)a1;

@end
