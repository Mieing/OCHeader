@class NSString;

@interface WeNoteZidlImplListenerImpl : NSObject <ZidlImplListener>

@property (retain, nonatomic) NSString *moduleName;
@property (copy, nonatomic) id /* block */ initCompleteHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
