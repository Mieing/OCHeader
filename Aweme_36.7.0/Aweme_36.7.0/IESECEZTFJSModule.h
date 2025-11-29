@class NSString;

@interface IESECEZTFJSModule : NSObject <JSModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

@end
