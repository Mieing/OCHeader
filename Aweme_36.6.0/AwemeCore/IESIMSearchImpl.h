@class NSString;

@interface IESIMSearchImpl : NSObject <IESIMSearchInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createSearchEngine;

@end
