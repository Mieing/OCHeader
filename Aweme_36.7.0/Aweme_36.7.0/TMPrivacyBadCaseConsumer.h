@class NSString;

@interface TMPrivacyBadCaseConsumer : NSObject <TSPKConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getValidFilters:(id)a0;
- (id)tag;
- (void)consume:(id)a0;

@end
