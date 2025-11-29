@class NSString;

@interface AWEStudioAPCUtilServiceImpl : NSObject <AWEStudioAPCUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repoDynamicRecorderInfoModelFromParseInfo:(id)a0;
+ (void)parseBizData:(id)a0 fromInfoDictionary:(id)a1;
+ (void)parsePublishComposer:(id)a0 fromInfoDictionary:(id)a1;
+ (id)parseCommerceWithInfoDictionary:(id)a0;


@end
