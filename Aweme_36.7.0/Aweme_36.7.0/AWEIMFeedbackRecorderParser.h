@class NSString;

@interface AWEIMFeedbackRecorderParser : NSObject <AWEFeedbackRecorderParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)type;
- (id)parse:(id)a0;

@end
