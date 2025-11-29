@class NSString;

@interface AffEmoticonDesignerPortfolioPackDataRecieverImpl : NSObject <EmoticonDesignerPortfolioPackDataRecieverBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFetchPackFinished:(id)a0;
- (void)onFetchPackFailed:(id)a0;

@end
