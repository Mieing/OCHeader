@class NSDictionary, NSMutableDictionary, NSString;

@interface IESLatchTemplateOutput : NSObject <IESLatchTemplateOutput>

@property (retain, nonatomic) NSMutableDictionary *results;
@property (copy, nonatomic) NSDictionary *apiPath;
@property (nonatomic) unsigned long long apiPathPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
