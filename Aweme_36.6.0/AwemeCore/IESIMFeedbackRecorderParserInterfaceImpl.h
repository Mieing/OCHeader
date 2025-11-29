@class NSString;

@interface IESIMFeedbackRecorderParserInterfaceImpl : NSObject <IESIMFeedbackRecorderParserInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)recordLabel:(id)a0 code:(long long)a1 logDict:(id)a2;

@end
